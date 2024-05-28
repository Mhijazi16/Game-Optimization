#include "Helper.h"
#include <unordered_map>


static State GAME;
static unordered_map<State, vector<double>, StateHash> q_table;
