#include "State.h"
#include <set>

bool isGoal(State state){
  for (auto& location : state.Meat)
    if(state.map_at(location) != BONE)
      return false; 
  return true;
}

bool onGoal(State state, Point location){
  for (auto& point : state.Meat)
    if (point == location)
      return true;
  return false;
}

bool notAllowed(State state, Point& Target, Point& Future){
  return state.isWall(Target) ||  
         state.isBox(Target) && state.isWallorBox(Future);
}

