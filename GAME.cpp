// Created BY Mohammed hijazi & Mohammed Alnahwi
#include <set>
#include "Qlearn.h"

using namespace std;

ostream& operator<<(ostream& os, const Point& p) { 
  os << "[" << p.x << ", " << p.y << "]";
  return os;
}

int main(){

  init();
  Train();
  printQ();
  solve_game(GAME);

  return 0;
}

