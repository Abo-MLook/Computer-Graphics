/*
  

#include <GL/glut.h>

void display() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_POINT_SMOOTH);
    glPointSize(50);

    glBegin(GL_POINTS);
    glColor3f(1, 0, 0);
    glVertex2f(30, 30);

    glColor3f(0, 1, 0);
    glVertex2f(30, 120);
     //asdas
    glColor3f(0, 0, 1);
    glVertex2f(120, 120);

    glColor3f(1, 1, 0);
    glVertex2f(120, 30);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(30, 30);
    glVertex2f(30, 120);

    glColor3f(1, 0, 1);
    glVertex2f(120, 120);
    glVertex2f(120, 30);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Point");
    gluOrtho2D(0, 200, 0, 200);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/