/*******************************************************************
*   File         : snake.h                                         *
*   Author(s)    : Lekha K & Ethan W                               *
*   Project      : SNAKE                                           *
*   Creation Date: 3/10/2015 - EW                                  *
*   Last Modified: 3/10/2015 - EW                                  *
*   Purpose      : The header file for the snake class declares    *
*                  what a snake object can do and keeps track of   *
*                  the snakes length, speed, and position          *
/******************************************************************/

#ifndef SNAKE_H
#define SNAKE_H

class Snake
{
private:
    int m_length;
    int m_speed;
    int m_snakeX;
    int m_snakeY;
    int HEIGHT = 20;
    int WIDTH = 20;


public:
    Snake();          // private default constructor
    ~Snake();        // private default destructor
    Snake(int length, int snakeX, int snakeY, int speed);

    void SetPosition(int length, int snakeX, int snakeY, int speed);

    int GetLength() { return m_length; }
    int GetSpeed()  { return m_speed; }
    int GetSnakeX() { return m_snakeX; }
    int GetSnakeY() { return m_snakeY; }
};

#endif
