#include "RockPaperScissors.h"
#include <string>
using namespace std;

string RockPaperScissorsPlay(const string player1, const string player2)
{
    if ((player1 == "Scissors" && player2 == "Paper") || (player1 == "Paper" && player2 == "Rock") || (player1 == "Rock" && player2 == "Scissors"))
    {
        return "Player1 Wins";
    }
    else if (player1 == player2)
    {
        return "Tie";
    }
    return "Player1 Loses";
    
}
   