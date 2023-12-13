/**************************************************************************************************
 *
 *                      Eaton Electrical
 *                      Proprietary Information
 *                      (C) Copyright
 *                      All rights reserved
 *
 **************************************************************************************************
 *
 * @brief 
 *
 * @file RockPaperScissors.c
 * @ingroup
 *
 *
 **************************************************************************************************/
#include "RockPaperScissors.h"

Result result[3][3] =
{
    { Tie, Loses, Wins },
    { Wins, Tie, Loses },
    { Loses, Wins, Tie }
};

Result RockPaperScissors_Play(Play PlayerOne, Play PlayerTwo)
{
    return result[PlayerOne][PlayerTwo];
}
