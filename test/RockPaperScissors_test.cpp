#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors_Test : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

// Rock/Rock: Tie
// Rock/Paper: Player1 Loses
// Rock/Scissors: Player1 Wins
// Paper/Rock: Player1 Wins
// Paper/Paper: Tie
// Paper/Scissors: Player1 Loses
// Scissors/Rock: Player1 Loses
// Scissors/Paper: Player1 Wins
// Scissors/Scissors: Tie

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPLaysRock_Tie)
{
   EXPECT_EQ(TIE, RockPaperScissors_Play(ROCK, ROCK));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPLaysPaper_Loses)
{
   EXPECT_EQ(LOSES, RockPaperScissors_Play(ROCK, PAPER));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysRockPlayerTwoPLaysScissors_Wins)
{
   EXPECT_EQ(WINS, RockPaperScissors_Play(ROCK, SCISSORS));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysPaperPlayerTwoPLaysRock_Wins)
{
   EXPECT_EQ(WINS, RockPaperScissors_Play(PAPER, ROCK));
}

TEST_F(RockPaperScissors_Test, PlayerOnePlaysPaperPlayerTwoPLaysPaper_Wins)
{
   EXPECT_EQ(TIE, RockPaperScissors_Play(PAPER, PAPER));
}
