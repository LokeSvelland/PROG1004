



class Player {
Private:
    string  name
    int     rating
    int     playerID
    string  club
    int     wins

public:
    - player();
    - updatePlayer();
    - playerWin();
}

vectorer:
    - hvem spiller på hvilket bord
    - vector <Player*> gPlayers;

globale verdier:
    - STRLEN - 80
    - tables (variable)

Funksjoner:
    -   void    player();
    -   void    updatePlayer();
    -   int     playerWin();
    -   void    results();
    -   void    newTournament();
    -   void    viewPlayers();
    -   bool    checkPlayers();
    -   void    writeToFil();
    -   void    readFromFil();


int main() {

    les fra fil

    skrivMeny();
    kommando = lesChar("\nKommando");

    while(kommando != Q) {
        switch(kommado) {
            case 'A': generate tournament set-up;
            case 'B': player();           break;
            case 'c': results();          break;
            case 'D': updatePlayer();     break;
            case 'E': view player list;   break;     
            default:  skrivMeny();        break;
        }
        kommando = lesChar("\nKommando");
    }

    skriv til fil

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

void writeToFil() {

}
  
void readFromFil() {

}

