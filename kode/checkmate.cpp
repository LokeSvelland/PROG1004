
#include <iostream>                //  cout, cin
#include <string>                  //  string
#include <vector>                  //  vector
#include "LesData2.h"
using namespace std;


class Player {
private:
    string  name;
    int     rating;
    int     playerID;
    string  club;
    int     wins;

public:
    void player();
    void updatePlayer();
    int  playerWin();
};

// vectorer:
//    - hvem spiller på hvilket bord
vector <Player *> gPlayers;

// globale verdier:
const int STRLEN = 80;
//    - tables (variable)

// Funksjoner:
void    player();
void    updatePlayer();
int     playerWin();
void    results();
void    newTournament();
void    viewPlayers();
bool    checkPlayers();
void    skrivMeny();
void    writeToFile();
void    readFromFile();


int main() {

char kommando;
//    readFromFile();

    skrivMeny();
    kommando = lesChar("\nKommando");

    while(kommando != 'Q') {
        switch(kommando) {
            case 1: newTournament();    break;
            case 2: player();           break;
            case 3: results();          break;
            case 4: updatePlayer();     break;
            case 5: viewPlayers();      break;     
            default:  skrivMeny();      break;
        }
        kommando = lesChar("\nKommando");
    }

//      writeToFile();

    return 0;
}

/**
* Reads new player
*/
void Player::player() {

    cout << "\n\tFull name: "; getline(cin, name);

}
 
void Player::updatePlayer() {

}

int  Player::playerWin() {

}
   
void results() {

}

void newTournament() {

}

void viewPlayers() {

}
 
bool checkPlayers() {

}

/**
 * writes the programs menu options
 */
void skrivMeny() {

cout << "\nMenu: \n"
     << "\t1 - Generate tournament set-up\n"
     << "\t2 - Add player\n"
     << "\t3 - Enter results\n"
     << "\t4 - Edit player\n"
     << "\t5 - view player list\n"
     << "\tQ - Quit\n\n";

}

void writeToFile() {

}
  
void readFromFile() {

}