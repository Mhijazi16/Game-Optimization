// Created BY Mohammed hijazi & Mohammed Alnahwi
#include <set>
#include "Controler.h"

using namespace std;

ostream& operator<<(ostream& os, const Point& p) { 
  os << "[" << p.x << ", " << p.y << "]";
  return os;
}

void interface(){
    string choice;

    cout << "🌟 Welcome to the Sokoban Game! 🌟\n\n";
    cout << "Please choose a mode:\n";
    cout << "1. 👤 Player Mode\n";
    cout << "2. 🤖 Computer Mode\n";
    cout << "\nEnter your choice (1 or 2): ";

    do
      cin >> choice;
    while (choice != "1" && choice != "2"); 

    if (choice == "1") 
      player_mode();
    else 
      computer_mode();
}

int main(){
  interface();
  return 0;
}

