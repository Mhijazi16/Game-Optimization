#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <ostream>

using namespace std;

struct Point{
  int x; 
  int y; 

  bool operator<(const Point& other) const {
      if (x != other.x)
          return x < other.x;
      return y < other.y;
  }

  Point operator+(const Point& other) const {
    return {x + other.x, y + other.y};
  } 
};

#endif
