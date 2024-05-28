#include "Helper.h"
#include <unordered_map>


static State GAME;
static unordered_map<State, vector<double>, StateHash> q_table;

void select_level()
{
  cout << "Enter Level : " ; 
  cin >> lvl; 
  lvl--; 
}

void init()
{
  select_level();
  GAME.Map = levels[lvl];
  GAME.print_map();

  int x,y;
  do {
    cout << "Enter Player Position : " ; 
    cin >> x >> y;
  }while (GAME.map_at({x,y}) != "  ");

  GAME.map_at({x,y}) = PLAYER;
  GAME.refresh();
}

State apply_move(State state, int action){

  auto move = Actions[moves[action]]; 
  auto& player = state.Player;
  auto Target = player + move;
  auto Future = Target + move; 

  if(notAllowed(state, Target, Future))
    return state;
  state.Action = action;

  if (state.isPoint(Target)) {
    state.map_at(Target) = PLAYER;
    state.map_at(player) = "  ";
    player = Target;
    return state;
  }
}
