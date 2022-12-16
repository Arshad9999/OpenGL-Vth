#include<GL/freeglut.h>

void display();
void reshape(int, int);
void timer(int);

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(200, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("3d rotation");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000, timer, 0);
    init();
    glutMainLoop();
}

float angle = 0.0;
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -8.0);
    glRotatef(angle, 1.0, 1.0, 1.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);

    glBegin(GL_POLYGON);


    //front
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(-0.8, 0.0, 1.7);
    glVertex3f(2.0, 0.0, 0.0);
    glEnd();
    //back
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(-0.8, 0.0, -1.7);
    glVertex3f(-0.8, 0.0, 1.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(-0.8, 0.0, -1.7);
    glVertex3f(2.0, 0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-0.8, 0.0, -1.7);
    glVertex3f(-0.8, 0.0, 1.7);
    glVertex3f(2.0, 0.0, 0.0);
    glEnd();






    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 2.0, 50.0);//60:1 aspect ratio z-near=2  z-far=50.0
    glMatrixMode(GL_MODELVIEW);
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0);
    angle += 0.8 * 2;
    if (angle > 360.0)
        angle = angle - 360.0;
}
