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

bool isDeadlock(State state){

  set<Point> seen;
  for (auto& box : state.Boxes)
  {
    if (seen.find(box) != seen.end())   
      return true; 
    seen.insert(box);

    if (onGoal(state, box))
      continue; 

    bool upright = state.isWall(box + Actions["up"]) && state.isWall(box + Actions["right"]); 
    bool upleft = state.isWall(box + Actions["up"]) && state.isWall(box + Actions["left"]); 
    bool downleft = state.isWall(box + Actions["down"]) && state.isWall(box + Actions["left"]); 
    bool downright = state.isWall(box + Actions["down"]) && state.isWall(box + Actions["right"]); 

    if (upright || upleft || downleft || downright)
      return true;
  }

return false;
}

