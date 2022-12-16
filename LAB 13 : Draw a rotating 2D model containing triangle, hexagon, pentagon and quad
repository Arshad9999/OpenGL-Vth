#include<GL/freeglut.h>

static GLfloat angle = 0.0f;
int main(int argc, char* argv[]) //Entry Point function
{
	//Function Declarations/Signatures
	void initializeMyOpenGL(void);
	void display(void);
	void uninitialize(void);
	void reshape(int, int);
	void update(void);
	//code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Miss.Vandana's Window");
	glutIdleFunc(update);
	initializeMyOpenGL();


	glutDisplayFunc(display);
	glutReshapeFunc(reshape);

	glutMainLoop();

	return(0);
}
void initializeMyOpenGL(void)
{

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_FLAT);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void uninitialize(void)
{
	//code
}

void reshape(int width, int height)
{
	glViewport(0, 0, width, height);

	//these calls are to set the perspective
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

}

void display(void)
{

	static float scalingVariable = 0.1f;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glMatrixMode(GL_MODELVIEW);


	//traingle
	glLoadIdentity();
	glTranslatef(-1.0f, 0.0f, -6.0f);
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	glScalef(2.0f, 2.0f, 2.0f);


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(0.4f, 0.3f);

	glEnd();
	//pentagon
	glLineWidth(6.0f);
	glRotatef(angle, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.2f, -0.9f);
	glVertex2f(0.2f, -0.9f);
	glVertex2f(0.5f, -0.5f);



	glEnd();


	//hexagon
	glLoadIdentity();
	glTranslatef(1.2f, 0.0f, -6.0f);
	glScalef(2.6f, 2.6f, 2.6f);

	glRotatef(angle, 0.0f, 1.0f, 0.0f);
	
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.3f, 0.7f);
	glVertex2f(-0.3f, 0.3f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.3f, 0.7f);
	

	glEnd();

	//Quad

	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.3f, -0.8f);
	glVertex2f(0.3f, -0.8f);
	glVertex2f(0.3f, -0.2f);


	glEnd();

	glutSwapBuffers();


	angle = angle + 0.35f;
	if (angle >= 360.0f)
	{
		angle = 0.0f;
	}

}

void update(void)
{

	glutPostRedisplay();
}
