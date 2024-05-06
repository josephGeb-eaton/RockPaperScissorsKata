#include <gtest/gtest.h>

#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(RockPaperScissors_test, PlayerOnePlaysScissorsPlayerTwoPlaysRock_PlayerOneLoses)
{
   EXPECT_EQ(Loses, RockPaperScissors_Play(Scissors, Rock));
}

TEST_F(RockPaperScissors_test, PlayerOnePlaysScissorsPlayerTwoPlaysPaper_PlayerOneWins)
{
   EXPECT_EQ(Wins, RockPaperScissors_Play(Scissors, Paper));
}

TEST_F(RockPaperScissors_test, PlayerOnePlaysScissorsPlayerTwoPlaysScissors_Draw)
{
   EXPECT_EQ(Draw, RockPaperScissors_Play(Scissors, Scissors));
}

TEST_F(RockPaperScissors_test, PlayerOnePlaysRockPlayerTwoPlaysScissors_PlayerOneWins)
{
   EXPECT_EQ(Wins, RockPaperScissors_Play(Rock, Scissors));
}

TEST_F(RockPaperScissors_test, PlayerOnePlaysRockPlayerTwoPlaysRock_Draw)
{
   EXPECT_EQ(Draw, RockPaperScissors_Play(Rock, Rock));
}
