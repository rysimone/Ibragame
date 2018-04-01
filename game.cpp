const int WIDTH = 30;
const int HEIGHT = 30;

char grid[WIDTH][HEIGHT];

#include <iostream>

using namespace std;

int main() {
  playGame();
}

void playGame()
{
  for(int i = 0; i < WIDTH; i++)
  {
    for(int j = 0 j < HEIGHT; j++)
    {
      grid[i][j] = ' ';
    }
  }
}
