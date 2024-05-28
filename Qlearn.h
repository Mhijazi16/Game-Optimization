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
