// Draw a Tree in open GL
//code
#include<GL/freeglut.h>
//Main is our entry point function
//Entry point :- We don't have to call this, OS calls it.
//This is the first function which runs
void main(int argc, char* argv[]) //Entry Point function
{
	//Function Declarations/Signatures
	void initializeMyOpenGL(void);
	void display(void);
	//code
	glutInit(&argc, argv); //to init the GLUT Library.
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	//GLUT_SINGLE = Single Buffering
	//GLUT_RGBA = Red, green, Blue, Alpha(Transparent)
	glutInitWindowSize(800, 600); //800 - Width, 600- Height
	glutInitWindowPosition(100, 50); //100 - StartingX, 50 - StartingY
	glutCreateWindow("Miss.Vandana's Window"); //Caption of the Window
	initializeMyOpenGL(); //calling the function
	//Keep the whole display in the loop.
	glutDisplayFunc(display);
	glutMainLoop();
}
void initializeMyOpenGL(void)
{
	//code
	//This will be your first OpenGL call.
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Clear the Background Color
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //this will bring the whole coordinate system to the centre
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(0.2f, 0.7f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(-0.4f, 0.5f);
	glVertex2f(0.4f, 0.5f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(0.5f, 0.3f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.7f, 0.05f);
	glVertex2f(0.7f, 0.05f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, 0.05f);
	glVertex2f(-0.2f, -0.3f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.2f, 0.05f);
	glEnd();
	glFlush();
}