//File "console.h"

#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>

#define ColorCode_Black			0
#define ColorCode_DarkBlue		1
#define ColorCode_DarkGreen		2
#define ColorCode_DarkCyan		3
#define ColorCode_DarkRed		4
#define ColorCode_DarkPink		5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite		7
#define ColorCode_Grey			8
#define ColorCode_Blue			9
#define ColorCode_Green			10
#define ColorCode_Cyan			11
#define ColorCode_Red			12
#define ColorCode_Pink			13
#define ColorCode_Yellow		14
#define ColorCode_White			15
#define ColorCode_MenuChoice    240
#define ColorCode_RedBG			192
#define ColorCode_GreenBG		160

#define MENU_X 25
#define MENU_Y 8

#define INFO_X 52
#define INFO_Y 5

#define MAP_WIDTH 80
#define MAP_HEIGHT 45

extern bool gamePaused;

using namespace std;

void resizeConsole(int width, int height);

void fixConsoleWindow();

void setColor(int color);

void goToXY(int x, int y);

void hideCursor();

void exitGame(HANDLE t);

void pauseGame(HANDLE t);

void resumeGame(HANDLE t);