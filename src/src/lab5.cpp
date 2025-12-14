/*
#include <GL/glut.h>

void display() {
    glClearColor(0.f, 0.f, 0.f, 1.f);
    glClear(GL_COLOR_BUFFER_BIT);

    glShadeModel(GL_SMOOTH);        // enable smooth vertex color interpolation

    glBegin(GL_TRIANGLES);
    // Top vertex (red)
    glColor3f(1.f, 0.f, 0.f);
    glVertex2f(15.f, 25.f);

    // Bottom-left vertex (green)
    glColor3f(0.f, 1.f, 0.f);
    glVertex2f(7.f, 7.f);

    // Bottom-right vertex (blue)
    glColor3f(0.f, 0.f, 1.f);
    glVertex2f(23.f, 7.f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Smooth Color Triangle (GL_TRIANGLES)");

    // 2D coords matching your other examples
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.f, 30.f, 0.f, 30.f);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/