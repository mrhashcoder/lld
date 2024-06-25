#include "Board/Board.h"
#include "Piece/Piece.h"


class Game {
    Board B;
    int playerCount
    vector<Player> players;
    int currentPlayer;

    init(Board newB , vector<Player> newPlayers){
        this.B = newB;
        this.players = newPlayers;
        this.currentPlayer = 0;
        this.playerCount = newPlayers.size();
    }

    void play(x , y){
        // write game logic here
        B.addPiece(x , y , this.players[currentPlayer].getPlayerPeice());
        currentPlayer ++;
        currentPlayer %= playerCount;
    }

    bool checkWin(){

    }

    void showStatus(){

    }

    void runGame(){
        
    }

}