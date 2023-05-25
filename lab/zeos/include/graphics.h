#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include <libc.h>

#define SCREEN_HEIGHT 25
#define SCREEN_WIDTH 80

#define BLACK   0
#define RED     1
#define GREEN   2
#define YELLOW  3
#define BLUE    4
#define MAGENTA 5
#define CYAN    6
#define WHITE   7

typedef unsigned char Color;

void draw_ij(char c, unsigned char i, unsigned char j, Color fg, Color bg);
void draw_xy(char c, unsigned char x, unsigned char y, Color fg, Color bg);
void erase_xy(unsigned char x, unsigned char y);
void erase_ij(unsigned char i, unsigned char j);
void fill_screen(char c, Color fg, Color bg);
void erase_screen();
void draw_line(char c, int x0, int y0, int x1, int y1, Color fg, Color bg);

#endif
