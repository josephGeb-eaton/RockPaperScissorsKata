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

TEST_F(name, Player1ShouldLoseWhenPlayer1PlaysScissorsAndPlayer2PlaysRock)
{
   EXPECT_EQ("Lose", RockPaperScissorsPlay());
}