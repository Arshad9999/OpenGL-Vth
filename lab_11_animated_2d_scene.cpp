#include<GL/freeglut.h>

void display();
void reshape(int, int);
void init() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(380, 20);
	glutInitWindowSize(700, 700);
	glutCreateWindow("Divvela Vishnu Sai Kumar A076119819005");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();
	glutMainLoop();
}

float x_position = -10.0;
int state = 1;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	//horizontal lines

	glColor3f(0.0, 1.0, 0.0);

	glBegin(GL_LINES);
	glVertex2f(-10, 9);
	glVertex2f(10, 9);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-10, 7);
	glVertex2f(10, 7);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, 5);
	glVertex2f(10, 5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, 3);
	glVertex2f(10, 3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, 1);
	glVertex2f(10, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, -1);
	glVertex2f(10, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, -3);
	glVertex2f(10, -3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, -5);
	glVertex2f(10, -5);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, -7);
	glVertex2f(10, -7);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-10, -9);
	glVertex2f(10, -9);
	glEnd();
	//vertical lines
	glBegin(GL_LINES);
	glVertex2f(-9, 10);
	glVertex2f(-9, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-7, 10);
	glVertex2f(-7, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-5, 10);
	glVertex2f(-5, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-3, 10);
	glVertex2f(-3, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-1, 10);
	glVertex2f(-1, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(1, 10);
	glVertex2f(1, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(3, 10);
	glVertex2f(3, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(5, 10);
	glVertex2f(5, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(7, 10);
	glVertex2f(7, -10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(9, 10);
	glVertex2f(9, -10);
	glEnd();
	//hexagon
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(-5, 7);
	glVertex2f(-7.3,6);
	glVertex2f(-7.3,3);
	glVertex2f(-5,2);
	glVertex2f(-2.7,3);
	glVertex2f(-2.7,6);
	glEnd();

	//rhombus

	glColor3f(1.0, 0.0, 0.0);
	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	glLineWidth(6.0f);
	glVertex2f(5, 7);
	glVertex2f(2.5, 4.5);
	glVertex2f(5, 2);
	glVertex2f(7.5, 4.5);
	glEnd();

	//right angled triangle

	glColor3f(0.0, 1.0, 0.0);
	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-7.3, -2);
	glVertex2f(-7.3, -7);
	glVertex2f(-2.3 , -7);
	glEnd();

	//pentagon
	glColor3f(0.0, 1.0, 1.0);

	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2f(5,-2);
	glVertex2f(2.5, -4.5);
	glVertex2f(3.5, -7);
	glVertex2f(6.5, -7);
	glVertex2f(7.5, -4.5);
	glEnd();
	//glLineWidth(1.0f);

	//glutSwapBuffers();
	glLineWidth(1.0f);
	glFlush();
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
}
