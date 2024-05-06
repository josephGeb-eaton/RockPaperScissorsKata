#include "RockPaperScissors.h"

Result RockPaperScissors_Play(Move playerOne, Move playerTwo)
{
    // Define the lookup table
    Result lookupTable[3][3] = {
        {Draw, Loses, Wins},  // Player one chooses Scissors
        {Wins, Draw, Loses},  // Player one chooses Rock
        {Loses, Wins, Draw},  // Player one chooses Paper
    };

    // Use the lookup table to determine the result
    return lookupTable[playerOne][playerTwo];
}