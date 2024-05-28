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
}
