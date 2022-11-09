#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

int window_x;
int window_y;

int window_width = 720;
int window_height = 480;

char *judul_window = "DDA 2018068";

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(10.0);
	glLoadIdentity();
	gluOrtho2D(0.0, 20.0, 0.0, 20.0);
}

void dda(void) {
	int x1, y1, x2, y2;
	float x, y, dx, dy, steps, x_inc, y_inc;

	x1 = 1;
	y1 = 6;
	x2 = 8;
	y2 = 8;

	x = x1;
	y = y1;

	dx = x2 - x1;
	dy = y2 - y1;

	if (dx > dy) {
		steps = dx;
	}
	else {
		steps = dy;
	}
	x_inc = dx / steps;
	y_inc = dy / steps;


	glBegin(GL_LINE_STRIP);
	glVertex2i(x, y);

	do {
		x += x_inc;
		y += y_inc;
		glVertex2i(round(x), round(y));
	} while (x < x2);

	glEnd();
	glFlush();

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	dda();
	glutSwapBuffers();
}
