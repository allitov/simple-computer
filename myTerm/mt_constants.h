#ifndef MT_CONSTANTS_H
#define MT_CONSTANTS_H

// colors
#define MAX_COLOR 7
#define MIN_COLOR 0

// console commands
#define BGCOLOR_PREF "\033[4%dm"
#define FGCOLOR_PREF "\033[3%dm"
#define CLEAR_SCREEN "\033[2J\033[H"
#define GOTO_YX "\033[%d;%dH"
#define DEFAULT_COLOR_PREF "\033[39;49m"
#define CURSOR_VISIBLE_PREF "\033[?25h"
#define CURSOR_INVISIBLE_PREF "\033[?25l"
#define DELLINE_PREF "\033[1K"
#endif // MT_CONSTANTS_H
