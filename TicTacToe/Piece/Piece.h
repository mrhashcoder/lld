enum PieceType {
    X,
    O
};

class Piece{
    private:
        PieceType type;

    public:
    Piece(){
        this->type = PieceType::X;
    }
    Piece(PieceType t){
        this->type = t;
    }

    PieceType getType(){
        return this->type;
    }
};