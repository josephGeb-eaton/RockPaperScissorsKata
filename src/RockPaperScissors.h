#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

typedef enum {
    ROCK,
    PAPER,
    SCISSORS
} Move;

typedef enum {
    WINS,
    LOSES,
    TIE
} Result;

Result RockPaperScissors_Play(Move PlayerOne_Move, Move PlayerTwo_Move);

#endif
