/*******************************************************************
*   File         : main.cpp                                        *
*   Author(s)    : Lekha & Ethan                                   *
*   Project      : SNAKE                                           *
*   Creation Date: 3/8/2015                                        *
*   Last Modified: 3/8/2015 - EW                                   *
*   Purpose      : Main cpp file for snake game.                   *
*******************************************************************/

#include <iostream>                     // Used for cin/cout
#include <cstdlib>                      // Used for system in the clearScreen function

using namespace std;


// Defining constants for level
const int HEIGHT = 20;
const int WIDTH = 20;
char BOARD[HEIGHT][WIDTH];

// Function prototypes
void clearScreen();
void initializeBoard();
void printBoard();

int main()
{
  initializeBoard();
  printBoard();

  return 0;
}


// Function definitions

/*******************************************************************
*   Function     : clearScreen()                                   *
*   Creation Date: 3/8/2015 - EW                                   *
*   Last Modified: 3/8/2015 - EW                                   *
*   Purpose      : Clears screen so it can be redrawn.             *
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
*   Creation Date: 3/8/2015 - EW                                   *
*   Last Modified: 3/8/2015 - EW                                   *
*   Purpose      : Sets board to its initial state.                *
*******************************************************************/
void initializeBoard()
{
  
  for(int i = 0; i < HEIGHT; i++)          // Initialize char array to all ' '
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
*   Function     : printBoard()                                    *
*   Creation Date: 3/8/2015 - EW                                   *
*   Last Modified: 3/8/2015 - EW                                   *
*   Purpose      : Draws board to console window.                  *
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