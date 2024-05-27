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

  State() = default;

  bool operator==(const State &other) const {
      return Map == other.Map &&
             Player == other.Player &&
             Meat == other.Meat &&
             Boxes == other.Boxes &&
             Action == other.Action &&
             Rows == other.Rows &&
             Cols == other.Cols;
  }

  string& map_at(Point point){
    return Map[point.x][point.y];
  }

  bool isWall(Point location){
    auto cell = map_at(location);
    for (auto& wall : WALL) {
      if(wall == cell)
        return true; 
    }
    return false;
  }

  bool isBox(Point location){
    for (auto& box : BOX) {
      if(box == map_at(location))
        return true; 
    }
    return false;
  }

  bool isPoint(Point location){
    for (auto& point : POINT) {
      if(point == map_at(location))
        return true; 
    }
    return false;
  }

};
