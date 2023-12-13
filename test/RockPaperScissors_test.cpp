#include <gtest/gtest.h>

extern "C"
{
   #include "RockPaperScissors.h"
}

class RockPaperScissorsTest : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(RockPaperScissorsTest, PlayerOnePlaysScissorsPlayerTwoPlaysRock_PlayerOneLoses)
{
   EXPECT_EQ(Loses, RockPaperScissors_Play(Scissors, Rock));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysScissorsPlayerTwoPlaysPaper_PlayerOneWins)
{
   EXPECT_EQ(Wins, RockPaperScissors_Play(Scissors, Paper));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysScissorsPlayerTwoPlaysScissors_PlayerOneTies)
{
   EXPECT_EQ(Tie, RockPaperScissors_Play(Scissors, Scissors));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysPaperPlayerTwoPlaysRock_PlayerOneWins)
{
   EXPECT_EQ(Wins, RockPaperScissors_Play(Paper, Rock));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysPaperPlayerTwoPlaysPaper_PlayerOneTies)
{
   EXPECT_EQ(Tie, RockPaperScissors_Play(Paper, Paper));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysPaperPlayerTwoPlaysScissors_PlayerOneLoses)
{
   EXPECT_EQ(Loses, RockPaperScissors_Play(Paper, Scissors));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysRockPlayerTwoPlaysRock_PlayerOneTies)
{
   EXPECT_EQ(Tie, RockPaperScissors_Play(Rock, Rock));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysRockPlayerTwoPlaysPaper_PlayerOneLoses)
{
   EXPECT_EQ(Loses, RockPaperScissors_Play(Rock, Paper));
}

TEST_F(RockPaperScissorsTest, PlayerOnePlaysRockPlayerTwoPlaysScissors_PlayerOneWins)
{
   EXPECT_EQ(Wins, RockPaperScissors_Play(Rock, Scissors));
}