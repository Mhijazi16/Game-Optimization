#include <string>
#include <vector>
#include <map>
#include "Point.h"

using namespace std;

static string PLAYER = "🐊";
static vector<string> WALL = {"⛺","🪵","🗿","🎪"};
static vector<string> BOX = {"🧺","🫙","🛒"};
static vector<string> POINT = {"🍗","🍖","🥩"};
static vector<string> moon = {"🌘","🌗","🌖","🌕","🌔","🌓","🌒","🌑"};
static string BONE = "🦴";
static int m = 0; 

static int lvl = 0;
static string moves[4] = {"up","down","right","left"};
static map<string, Point> Actions = 
{
  {"up",{-1,0}},
  {"down",{1,0}},
  {"right",{0,1}},
  {"left",{0,-1}},
};
