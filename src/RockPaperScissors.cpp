#include "RockPaperScissors.h"
using namespace std;

WinOrLose RockPaperScissorsPlay(PlayerMoves Player_1, PlayerMoves Player_2)
{
    if ((Player_1 == Scissors && Player_2 == Paper) || (Player_1 == Paper && Player_2 == Rock) 
    || (Player_1 == Rock && Player_2 == Scissors))
    {
        return Player_1_Wins;
    }
    else if (Player_1 == Player_2)
    {
        return Tie;
    }
    return Player_1_Loses;
    
}

