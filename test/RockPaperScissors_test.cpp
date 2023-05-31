#include <gtest/gtest.h>
#include "RockPaperScissors.h"

class RockPaperScissors : public ::testing::Test
{
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_F(RockPaperScissors, ExpectPlayer1LosesWhenPlayer1IsScissorsAndPlayer2isRock)
{
    EXPECT_EQ(Loss, Play(SCISSORS, ROCK));
}

TEST_F(RockPaperScissors, ExpectPlayer1WinsWhenPlayer1IsScissorsAndPlayer2isPaper)
{
    EXPECT_EQ(Win, Play(SCISSORS, PAPER));
}

TEST_F(RockPaperScissors, ExpectTiesWhenPlayer1IsScissorsAndPlayer2isScissors)
{
    EXPECT_EQ(Tie, Play(SCISSORS, SCISSORS));
}

TEST_F(RockPaperScissors, ExpectPlayer1WinsWhenPlayer1IsPaperAndPlayer2isRock)
{
    EXPECT_EQ(Win, Play(PAPER, ROCK));
}

TEST_F(RockPaperScissors, ExpectPlayer1LosesWhenPlayer1IsPaperAndPlayer2isScissors)
{
    EXPECT_EQ(Loss, Play(PAPER, SCISSORS));
}

TEST_F(RockPaperScissors, ExpectTiesWhenPlayer1IsPaperAndPlayer2isPaper)
{
    EXPECT_EQ(Tie, Play(PAPER, PAPER));
}

TEST_F(RockPaperScissors, ExpectPlayer1LosesWhenPlayer1IsRockAndPlayer2isPaper)
{
    EXPECT_EQ(Loss, Play(ROCK, PAPER));
}