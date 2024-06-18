#include "RockPaperScissors.h"

Result RockPaperScissors_Play(Move PlayerOne_Move, Move PlayerTwo_Move)
{
    switch(PlayerOne_Move)
    {
        case ROCK:
            if (PlayerTwo_Move == SCISSORS)
                return WINS;
            if (PlayerTwo_Move == PAPER)
                return LOSES;
            break;
        case PAPER:
            if (PlayerTwo_Move == ROCK)
                return WINS;
            if (PlayerTwo_Move == SCISSORS)
                return LOSES;
            break;
        case SCISSORS:
            if (PlayerTwo_Move == PAPER)
                return WINS;
            if (PlayerTwo_Move == ROCK)
                return LOSES;
            break;
    }
    return TIE;
}
