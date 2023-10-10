#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printEnemy();
void printPlayer();
void eraseEnemy();
void moveEnemy();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void erasePlayer();
void printEnemy2();
void moveEnemy2();
void eraseEnemy2();
void printEnemy4();
void eraseEnemy4();
void moveEnemy4();
char getCharAtxy(short int x, short int y);

int pX = 20, pY = 20;
int eX = 2, eY = 2;
int fX = 6, fY = 6;
int cX=20,cY=10;

main()
{
  system("cls");
  printMaze();
  printPlayer();
  printEnemy2();
  printEnemy();
  while (true)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
      movePlayerRight();
    }
    if (GetAsyncKeyState(VK_UP))
    {
      movePlayerUp();
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
      movePlayerDown();
    }
    moveEnemy2();
    moveEnemy();
    moveEnemy4();
    Sleep(300);
  }
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
  cout << "##########################################################################################" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "#                                                                                        #" << endl;
  cout << "##########################################################################################" << endl;
}

void printEnemy()
{
  gotoxy(eX, eY);
  cout << " ^    |\\_/|   ^    " << endl;
  gotoxy(eX, eY + 1);
  cout << " /| \\_\\*=*/_/ |\\  " << endl;
  gotoxy(eX, eY + 2);
  cout << " ( |  {^ ^}   | )   " << endl;
  gotoxy(eX, eY + 3);
  cout << " \\ \\   | |   / /  " << endl;
  gotoxy(eX, eY + 4);
  cout << "       [/\\]        " << endl;
}

void printEnemy3()
{
  gotoxy(eX, eY);
  cout << " ^    |\\_/|   ^    " << endl;
  gotoxy(eX, eY + 1);
  cout << " /| \\_\\*=*/_/ |\\  " << endl;
  gotoxy(eX, eY + 2);
  cout << " ( |  {^ ^}   | )   " << endl;
  gotoxy(eX, eY + 3);
  cout << " \\ \\   | |   / /  " << endl;
  gotoxy(eX, eY + 4);
  cout << "       [/\\]        " << endl;
}

void printPlayer()
{

  gotoxy(pX, pY + 8);
  cout << "          /\\            " << endl;
  gotoxy(pX, pY + 9);
  cout << "       __/~~\\__         " << endl;
  gotoxy(pX, pY + 10);
  cout << "     /   |  |   \\       " << endl;
  gotoxy(pX, pY + 11);
  cout << "    =====.  .=====      " << endl;
  gotoxy(pX, pY + 12);
  cout << "         ||||           " << endl;
}

void eraseEnemy()
{
  gotoxy(eX, eY);
  cout << "                  ";
  gotoxy(eX, eY + 1);
  cout << "                  ";
  gotoxy(eX, eY + 2);
  cout << "                  ";
  gotoxy(eX, eY + 3);
  cout << "                  ";
  gotoxy(eX, eY + 4);
  cout << "                  ";
}

void moveEnemy()
{
  eraseEnemy();
  eX = eX + 1;
  if (eX == 60)
  {
    eX = 2;
  }
  printEnemy();
}

void erasePlayer()
{
  gotoxy(pX, pY);
  cout << "                       " << endl;
  gotoxy(pX, pY + 8);
  cout << "                       " << endl;
  gotoxy(pX, pY + 9);
  cout << "                       " << endl;
  gotoxy(pX, pY + 10);
  cout << "                       " << endl;
  gotoxy(pX, pY + 11);
  cout << "                       " << endl;
  gotoxy(pX, pY+12);
  cout << "                       " << endl;
}

void movePlayerLeft()

{
	if (getCharAtxy(pX + 15, pY) == ' ')
{
  erasePlayer();
  pX = pX - 1;
  printPlayer();
}
}
void movePlayerUp()

{
	if (getCharAtxy(pX + 15, pY) == ' ')
{
  erasePlayer();
  pY = pY - 1;
  printPlayer();
}
}

void movePlayerRight()

{
	if (getCharAtxy(pX + 15, pY) == ' ')
{
  erasePlayer();
  pX = pX + 1;
  printPlayer();
}
}
void movePlayerDown()

{
	if (getCharAtxy(pX + 15, pY) == ' ')
{
  erasePlayer();
  pY = pY + 1;
  printPlayer();
}
}

void printEnemy2()
{
  gotoxy(fX, fY + 6);
  cout << " ^    |\\_/|   ^    " << endl;
  gotoxy(fX, fY + 7);
  cout << " /| \\_\\*=*/_/ |\\  " << endl;
  gotoxy(fX, fY + 8);
  cout << " ( |  {^ ^}   | )   " << endl;
  gotoxy(fX, fY + 9);
  cout << " \\ \\   | |   / /  " << endl;
  gotoxy(fX, fY + 10);
  cout << "       [/\\]        " << endl;
}


void moveEnemy2()
{
  eraseEnemy2();
  fY = fY + 1;
  if (fY == 20)
  {
    fY = 2;
  }
  printEnemy2();
}
void eraseEnemy2()
{
  gotoxy(fX, fY+6);
  cout << "                  ";
  gotoxy(fX, fY+7);
  cout << "                  ";
  gotoxy(fX, fY+8);
  cout << "                  ";
  gotoxy(fX, fY+9);
  cout << "                  ";
  gotoxy(fX, fY+10);
  cout << "                  ";
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void printEnemy4()
{
  gotoxy(cX, cY);
  cout << " ^    |\\_/|   ^    " << endl;
  gotoxy(cX, cY + 1);
  cout << " /| \\_\\*=*/_/ |\\  " << endl;
  gotoxy(cX, cY + 2);
  cout << " ( |  {^ ^}   | )   " << endl;
  gotoxy(cX, cY + 3);
  cout << " \\ \\   | |   / /  " << endl;
  gotoxy(cX, cY + 4);
  cout << "       [/\\]        " << endl;
}
void eraseEnemy4()
{
  gotoxy(cX, cY);
  cout << "                  ";
  gotoxy(cX, cY+1);
  cout << "                  ";
  gotoxy(cX, cY+2);
  cout << "                  ";
  gotoxy(cX, cY+3);
  cout << "                  ";
  gotoxy(cX, cY+4);
  cout << "                  ";
  
}
void moveEnemy4()
{
  eraseEnemy4();
  cX = cX + 1;
  cY= cY+1;
  if (cX == 30)
  {
    cX = 2;
    cY=2;
  }
  if(cY==26)
  {
  	cX=2;
  	cY=2;
  }
  printEnemy4();
}

