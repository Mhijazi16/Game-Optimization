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

  if (state.isBox(Target)) {
    if (state.isPoint(Future)){
      state.map_at(Future) = BONE; 
      state.Bones.push_back(Future);
    }
    else 
      state.map_at(Future) = BOX[lvl]; 
    state.map_at(Target) = "  ";
    state.box_at(Target) = Future;
  }

  if (state.isSpace(Target)) {
    if(state.player_on_point())
      state.map_at(player) = POINT[lvl];
    else 
      state.map_at(player) = "  ";
    state.map_at(Target) = PLAYER;
    player = Target;
  }

  return state;
}
