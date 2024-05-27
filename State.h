#include "Point.h"
#include "Context.h"
#include <iostream>

using namespace std;

struct State{ 
  vector<vector<string>> Map;
  Point Player; 
  vector<Point> Meat;
  vector<Point> Boxes; 
  vector<Point> Bones; 
  string Action = "NULL";
  int Rows = 0; 
  int Cols = 0;
};
