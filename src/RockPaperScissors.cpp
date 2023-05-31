#include "RockPaperScissors.h"
#include <string.h>

typedef struct{
    Move_t player1;
    Move_t player2;
    Result_t result;
} RockPaperScissors_t;

RockPaperScissors_t moves[] = {
    {ROCK, ROCK, Tie},
    {ROCK, PAPER, Loss},
    {ROCK, SCISSORS, Win},
    {PAPER, ROCK, Win},
    {PAPER, PAPER, Tie},
    {PAPER, SCISSORS, Loss},
    {SCISSORS, ROCK, Loss},
    {SCISSORS, PAPER, Win},
    {SCISSORS, SCISSORS, Tie},
};

Result_t Play(Move_t player1, Move_t player2)
{
    return moves[player1 * 3 + player2].result;
}