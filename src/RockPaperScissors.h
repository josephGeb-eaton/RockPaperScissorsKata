#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

using namespace std;

enum PlayerMoves
{
Rock = 0,
Paper = 1,
Scissors = 2
};

 enum WinOrLose
 {
    Player_1_Wins,
    Player_1_Loses,
    Tie
 };

WinOrLose RockPaperScissorsPlay(PlayerMoves Player_1, PlayerMoves Player_2);

#endif
