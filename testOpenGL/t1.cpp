#include<iostream>
#include <gl/freeglut.h>

void render(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0 );
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 0.0 );
	glRectf(0.0f, 0.0f, 50.0f, 50.0 );
	glFlush();
	return;
}