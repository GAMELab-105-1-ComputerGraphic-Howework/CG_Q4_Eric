#pragma once
#define GLUT_DISABLE_ATEXIT_HACK

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include "../freeglut-3.0.0/include/glut.h"

static int draw_mode = 1;
static int action = 0;
static GLuint inner_mode = GL_SMOOTH;
static GLuint tex_state = GL_TRUE;
static int state_chang;

float	anklea = 0, anklex = 0, ankley = 0, anklez = 1;		//手肘
float	plama, plamx = 0, plamy = 0, plamz = 0;		//手掌 (靜止)
float	anklef1a[2], anklef1x[2], anklef1y[2], anklef1z[2];	//拇指
float	anklef2a[3], anklef2x[3], anklef2y[3], anklef2z[3];	//食指
float	anklef3a[3], anklef3x[3], anklef3y[3], anklef3z[3];	//中指
float	anklef4a[3], anklef4x[3], anklef4y[3], anklef4z[3];	//無名指
float	anklef5a[3], anklef5x[3], anklef5y[3], anklef5z[3];	//小指
//		^^^轉動量		^^^轉動軸x		^^^轉動軸y		^^^轉動軸z

static int WinWidth = 600;
static int WinHeight = 600;

int state = 1;

void standby();

void draw_hand(void);

void draw(void);

void display(void);

void reshape(int w, int h);

void init(void);

void rock_pos(void);

void one(void);

void keyin(unsigned char key, int x, int y);

void timerFunction(int value);

int main(int argc, char** argv);

void drawIndexFinger();

void drawThumb();

void drawMiddleFinger();

void drawRingFinger();

void drawLittleFinger();

void paper();

void scissor();