#include<iostream>
#include "Piece.h"

class PieceO : public Piece{
    
    PieceO(){
        Piece(PieceType::O);
    }
};