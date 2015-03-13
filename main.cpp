/*******************************************************************
*   File         : main.cpp                                        *
*   Author(s)    : Lekha K & Ethan W                               *
*   Project      : SNAKE                                           *
*   Creation Date: 03/08/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Main cpp file for snake game                    *
*******************************************************************/

#include <iostream>                     // Used for cin/cout
#include <cstdlib>                      // Used for system in the clearScreen function
#include "snake.h"                      // Used for snake class

using namespace std;


// Defining constants for level
const int HEIGHT = 20;
const int WIDTH = 20;
char BOARD[HEIGHT][WIDTH];

// Function prototypes
void clearScreen();
void initializeBoard();
void updateBoard(Snake snk);
void printBoard();
void moveSnake();

int main()
{
  initializeBoard();
  printBoard();

  Snake snake;
  char userInput;
  bool gameOver = false;
  updateBoard(snake);

  while(!gameOver)
  {
    updateBoard(snake);
    cout << endl << "Use WASD to move and Q to Quit" << endl;
    cin >> userInput;
    if(userInput == 'W' || userInput == 'w')
    {
      snake.SetPosition(1, snake.GetSnakeX()-1, snake.GetSnakeY(), 1);
    }
    else if(userInput == 'S' || userInput == 's')
    {
        snake.SetPosition(1, snake.GetSnakeX()+1, snake.GetSnakeY(), 1);
    }
    else if(userInput == 'A' || userInput == 'a')
    {
        snake.SetPosition(1, snake.GetSnakeX(), snake.GetSnakeY()-1, 1);
    }
    else if(userInput == 'D' || userInput == 'd')
    {
        snake.SetPosition(1, snake.GetSnakeX(), snake.GetSnakeY()+1, 1);
    }
    else if(userInput == 'Q' || userInput == 'q')
    {
        gameOver = true;
    }

  }

  return 0;
}


// Function definitions

/*******************************************************************
*   Function     : clearScreen()                                   *
*   Creation Date: 03/08/2015 - EW                                 *
*   Last Modified: 03/08/2015 - EW                                 *
*   Purpose      : Clears screen so it can be redrawn              *
*******************************************************************/
void clearScreen()
{
  #ifdef WINDOWS
      system("cls");
  #else
      // Assume POSIX
      system ("clear");
  #endif
}

/*******************************************************************
*   Function     : initializeBoard()                               *
*   Creation Date: 03/08/2015 - EW                                 *
*   Last Modified: 03/08/2015 - EW                                 *
*   Purpose      : Sets board to its initial state                 *
*******************************************************************/
void initializeBoard()
{

  for(int i = 0; i < HEIGHT; i++)           // Initialize char array to all ' '
  {
    for(int j = 0; j < WIDTH; j++)
    {
      BOARD[i][j] = ' ';
    }
  }


  for(int i = 0; i < HEIGHT; i++)
  {
    for(int j = 0; j < WIDTH; j++)          // Initialize border elements to '+' representing wall
    {
      BOARD[i][0] = '+';
      BOARD[0][j] = '+';
      BOARD[i][WIDTH - 1] = '+';
      BOARD[HEIGHT - 1][j] = '+';
    }
  }
}
/*******************************************************************
*   Function     : updateBoard()                                   *
*   Creation Date: 03/10/2015 - EW                                 *
*   Last Modified: 03/10/2015 - EW                                 *
*   Purpose      : Updates board with snake position               *
*******************************************************************/
void updateBoard(Snake snk)
{
  clearScreen();
  initializeBoard();
  BOARD[snk.GetSnakeX()][snk.GetSnakeY()] = '@';
  printBoard();
}

/*******************************************************************
*   Function     : printBoard()                                    *
*   Creation Date: 03/08/2015 - EW                                 *
*   Last Modified: 03/08/2015 - EW                                 *
*   Purpose      : Draws board to console window                   *
*******************************************************************/
void printBoard()
{
  for(int i = 0; i < HEIGHT; i++)
  {
    cout << endl;
    for(int j = 0; j < WIDTH; j++)
    {
      cout << " " << BOARD[i][j];
    }
  }
}
