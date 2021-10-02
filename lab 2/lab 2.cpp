#include <windows.h> 
#include <GL/glu.h> 
#include <GL/glut.h>
#include <GL/gl.h> 


void resize(int width, int height)
{
}
void display(void)
{
	glColor3d(2, 1, 0.5);
	glutSolidTeapot(2);
	glFlush();
}
void init(void)
{
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glLightf(GL_LIGHT0, GL_POSITION, (0, -1, -1, 10));
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.5, 0.5, 2.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);
	gluLookAt(4, 1, 5, 0, 1, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
	glRotatef(30, 1, 1, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(1, -3);
	glutInitWindowSize(700, 700);
	glutCreateWindow("Hello");
	glutReshapeFunc(resize);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
