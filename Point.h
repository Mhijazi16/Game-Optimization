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

  bool operator==(const Point& other) const{
    return x == other.x && y == other.y;
  }

  Point operator+(const Point& other) const {
    return {x + other.x, y + other.y};
  } 

  double distance(Point& other){
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
  }
};

struct PointHash {
    size_t operator()(const Point& p) const {
        return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
    }
};

ostream& operator<<(ostream& os, const Point& p);

#endif
