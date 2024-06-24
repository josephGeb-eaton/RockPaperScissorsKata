#include "RockPaperScissors.h"
#include <string>
using namespace std;

string RockPaperScissorsPlay(string player2)
{
    if (player2 == "Rock")
    {
        return "Lose";
    }
    if (player2 == "Paper")
    {
        return "win";
    }
    if (player2 == "Scissors")
    {
        return "Tie";
    }
}
