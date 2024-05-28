#include "State.h"
#include <set>

bool isGoal(State state){
  for (auto& location : state.Meat)
    if(state.map_at(location) != BONE)
      return false; 
  return true;
}

