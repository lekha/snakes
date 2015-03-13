/*******************************************************************
*   File         : snake.cpp                                       *
*   Author(s)    : Lekha K & Ethan W                               *
*   Project      : SNAKE                                           *
*   Creation Date: 3/10/2015 - EW                                  *
*   Last Modified: 3/10/2015 - EW                                  *
*   Purpose      : The cpp file for the snake class defines        *
*                  the snakes functions                            *
/******************************************************************/
#include <iostream>
#include "snake.h"

using namespace std;

// Function definitions

/*******************************************************************
*   Function     : Snake()                                         *
*   Creation Date: 03/10/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Default Snake constructor sets default position *
*******************************************************************/
    Snake::Snake()
    {
      SetPosition( 1, (HEIGHT/2), (WIDTH/2), 1);
    }

/*******************************************************************
*   Function     : Snake()                                         *
*   Creation Date: 03/10/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Overloaded Snake constructor sets snake position*
*******************************************************************/
    Snake::Snake(int length, int snakeX, int snakeY, int speed)
    {
      SetPosition( length, snakeX, snakeY, speed);
    }

/*******************************************************************
*   Function     : ~Snake()                                         *
*   Creation Date: 03/10/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Default Deconstructor                           *
*******************************************************************/
    Snake::~Snake()
    {

    }

/*******************************************************************
*   Function     : SetPosition()                                   *
*   Creation Date: 03/10/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Set private position variables of snake object  *
*******************************************************************/
    void Snake::SetPosition(int length, int snakeX, int snakeY, int speed)
    {
      m_length = length;
      m_snakeX = snakeX;
      m_snakeY = snakeY;
      m_speed  = speed;

    }
