#include "Qlearn.h"
#include <caca_conio.h>
#include <curses.h>

void play(State state){

  char input; while ( input != 'q' && !isGoal(state) && !isDeadlock(state)) {
    state.print_map();

    switch (input) {
      case 'w':
        state = apply_move(state, 0);
        break; 
      case 's':
        state = apply_move(state, 1);
        break;
      case 'd':
        state = apply_move(state, 2);
        break;
      case 'a':
        state = apply_move(state, 3);
        break;
    }

    input = cin.get();
  }

}

void player_mode(){
  cout << "\n👤 Player Mode selected. Enjoy the game!\n";
  cout << "\n🎮 Controls:\n";
  cout << "+-----+-------+\n";
  cout << "| Key | Emoji |\n";
  cout << "+-----+-------+\n";
  cout << "|  w  |   ⬆️   |\n";
  cout << "|  a  |   ⬅️   |\n";
  cout << "|  s  |   ⬇️   |\n";
  cout << "|  d  |   ➡️   |\n";
  cout << "+-----+-------+\n";
  init();
  play(GAME);
}
