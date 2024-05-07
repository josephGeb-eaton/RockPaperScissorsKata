#include "gtest/gtest.h"
#include "RockPaperScissors.h"

class RockPaperScissors_test : public ::testing::TestWithParam<std::tuple<Move, Move, Result>> {
protected:
   void SetUp() override
   {
   }

   void TearDown() override
   {
   }
};

TEST_P(RockPaperScissors_test, TestRockPaperScissors)
{
   Move playerOneMove = std::get<0>(GetParam());
   Move playerTwoMove = std::get<1>(GetParam());
   Result expected = std::get<2>(GetParam());

   EXPECT_EQ(expected, RockPaperScissors_Play(playerOneMove, playerTwoMove));
}

INSTANTIATE_TEST_SUITE_P(
   RockPaperScissorsTests,
   RockPaperScissors_test,
   ::testing::Values(
      std::make_tuple(Scissors, Scissors, Draw),
      std::make_tuple(Scissors, Rock, Loses),
      std::make_tuple(Scissors, Paper, Wins),
      std::make_tuple(Rock, Scissors, Wins),
      std::make_tuple(Rock, Rock, Draw),
      std::make_tuple(Rock, Paper, Loses),
      std::make_tuple(Paper, Scissors, Loses),
      std::make_tuple(Paper, Rock, Wins),
      std::make_tuple(Paper, Paper, Draw)
   )
);