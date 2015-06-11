#include "Eval.hpp"

Eval::Eval(std::shared_ptr<Board> boardPtr)
{
    myBoard = boardPtr;
}

int Eval::evaluate()
{
    int score = 0;
    return score + 100*getMaterialScore() + getMobilityScore();
}


int Eval::getMobilityScore()
{
    return 1; // Need a way to efficiently get attacking squares => look at Board::getAttackedPositions()
}

int Eval::getMaterialScore()
{
    return 1;
}