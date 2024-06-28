#include <gtest/gtest.h>

#include "RockPaperScissors.h"

using namespace std;

class name : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

//test1
TEST_F(name, Player1ShouldLoseWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
   EXPECT_EQ(Player_1_Loses, RockPaperScissorsPlay(Scissors,Rock));
}

//test2
TEST_F(name, Player1ShouldWinWhenPlayer1PlaysScissorsAndPlayer2PlaysPaper)
{
   EXPECT_EQ(Player_1_Wins, RockPaperScissorsPlay(Scissors,Paper));
}

//test 3
TEST_F(name, Player1ShouldTieWhenPlayer1PlaysScissorsAndPlayer2PlaysScissors)
{
   EXPECT_EQ(Tie, RockPaperScissorsPlay(Scissors,Scissors));
}

//test 4
TEST_F(name, Player1ShouldWinWhenPlayer1PlaysPaperAndPlayer2PlaysRock)
{
   EXPECT_EQ(Player_1_Wins, RockPaperScissorsPlay(Paper,Rock));
}

//test5
TEST_F(name, Player1ShouldLoseWhenPlayer1PlaysPaperAndPlayer2PlaysScissors)
{
   EXPECT_EQ(Player_1_Loses, RockPaperScissorsPlay(Paper,Scissors));
}

//test6
TEST_F(name, Player1ShouldTieWhenPlayer1PlaysPaperAndPlayer2PlaysPaper)
{
   EXPECT_EQ(Tie, RockPaperScissorsPlay(Paper,Paper));
}

//test7
TEST_F(name, Player1ShouldLoseWhenPlayer1PlaysRockAndPlayer2PlaysPaper)
{
   EXPECT_EQ(Player_1_Loses, RockPaperScissorsPlay(Rock,Paper));
}

//test8
TEST_F(name, Player1ShouldWinWhenPlayer1PlaysRockAndPlayer2PlaysScissors)
{
   EXPECT_EQ(Player_1_Wins, RockPaperScissorsPlay(Rock,Scissors));
}

//test9
TEST_F(name, Player1ShouldTieWhenPlayer1PlaysRockAndPlayer2PlaysRock)
{
   EXPECT_EQ(Tie, RockPaperScissorsPlay(Rock,Rock));
}