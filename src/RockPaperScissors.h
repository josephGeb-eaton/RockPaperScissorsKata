#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

enum Move {
    Scissors, // 0
    Rock,     // 1
    Paper     // 2
};

enum Result {
    Loses,  // 0
    Draw,   // 1
    Wins    // 2
};

Result RockPaperScissors_Play(Move playerOne, Move playerTwo);

#endif
