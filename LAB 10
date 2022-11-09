// Draw a house in Open GL
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
	//green triangle
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.5f,0.6f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.3f, 0.4f);
	glEnd();
	//blue rectangle front of house
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.3f, 0.4f);
	glEnd();
	//red top of the house
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.2f, 0.6f);
	glEnd();
	//yellow body rectangle of house
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, 0.4f);
	glEnd();
	//white rectangle for door outline
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.6f, 0.15f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.4f, 0.15f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.15f);
	glVertex2f(-0.4f, 0.15f);
	glEnd();
	//yellow door
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.6f, 0.15f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.1f);
	glEnd();
	//white square for window
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, 0.25f);
	glEnd();
	// + shape inside of window
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.05f, 0.25f);
	glVertex2f(0.05f, 0.05f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.15f, 0.15f);
	glEnd();
	//outline of the white squared window
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.05f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(0.15f, 0.05f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, 0.25f);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.15f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glEnd();
	glFlush();
}
