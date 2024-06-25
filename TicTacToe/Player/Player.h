#include <bits/stdc++.h>
#include "Piece/Piece.h"
#include "PieceX.h"

class Player{
    private:
    string name;
    int id;
    Piece playerPiece;

    Public:
    Player(string name, int id , Piece piece){
        this.name = name;
        this.id = id;
        this.playerPiece = piece;
    }

    Player(){
        Player("Player" , 9 , new PieceX())
    }

    Piece getPlayerPiece(){
        return this.playerPiece;
    }
}
