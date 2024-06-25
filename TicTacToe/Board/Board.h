#include<bits/stdc++.h>
#include "Piece/Piece.h"
using namespace std;


class Board{
    private:
        int size;
        vector<vector<Piece>> board;

    public:

    Board(int size){
        this.size = size;
        board.resize(size);
        for(auto it = board.begin(); it != board.end(); ++it){
            it -> resize(size);
        }
    }

    Board(){
        Board(3);
    }

    void addPiece(int x , int y , Piece P){
        // Game Logic
        board[x][y] = P;
    }

    void printBoard(){
        for(int x = 0; x < this.size ; x++){
            for(int y = 0; y < this.size ; y++){
                if(board[x][y] == PieceType::O){
                    cout<< O << " "; 
                }
                if(board[x][y] == PieceType::X){
                    cout<< X << " ";
                }
            }
            cout<<"\n";
        }
    }

};