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
 * @file RockPaperScissors.h
 * @ingroup
 *
 *
 **************************************************************************************************/
#ifndef RockPaperScissors_h
#define RockPaperScissors_h

typedef enum {
    Rock,
    Paper,
    Scissors
} Play;

typedef enum {
    Wins,
    Loses,
    Tie
} Result;

Result RockPaperScissors_Play(Play PlayerOne, Play PlayerTwp);

#endif // RockPaperScissors_h