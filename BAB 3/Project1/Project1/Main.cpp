#include "DDA.h"
void main(int argc, char **argv)
{

	glutInit(&argc, argv);
	window_x = (glutGet(GLUT_SCREEN_WIDTH) - window_width) / 2;
	window_y = (glutGet(GLUT_SCREEN_HEIGHT) - window_height) / 2;
	glutInitWindowSize(window_width, window_height);
	glutInitWindowPosition(window_x, window_y);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow(judul_window);

	init();
	glutDisplayFunc(display);
	glutMainLoop();
}

//#include "bressenham.h"
//int main(int argc, char** argv)
//{
//	glutinitwindowsize(400, 400);
//	glutinitwindowposition(0, 0);
//	glutcreatewindow("bresenham 2018068");
//	display();
//	glutdisplayfunc(drawmyline);
//	glutmainloop();
//	return 0;
//}


