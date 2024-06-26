#include "RockPaperScissors.h"
#include <string>
using namespace std;

string RockPaperScissorsPlay(const string player1, const string player2)
{
    if (player1 == "Scissors" && player2 == "Rock")
    {
        return "Player1 Loses";
    }
    if (player1 == "Scissors" && player2 == "Paper")
    {
        return "Player1 wins";
    }
    if (player1 == "Scissors" && player2 == "Scissors")
    {
        return "Tie";
    }
    if (player1 == "Paper" && player2 == "Rock")
    {
        return "Player1 wins";
    }
    if (player1 == "Paper" && player2 == "Scissors" )                   
    {
        return "Player1 Loses";
    }
    if (player1 == "Paper" && player2 == "Paper")
    {
        return "Tie";
    }
    if (player1 == "Rock" && player2 == "Paper")
    {
        return "Player1 Loses";
    }
    if (player1 == "Rock" && player2 == "Scissors")
    {
        return "Player1 Wins";
    }
    if (player1 == "Rock" && player2 == "Rock")
    {
        return "Tie";
    }
}
