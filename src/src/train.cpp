
/*
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_POINT_SMOOTH);
    glPointSize(30.0f);

    glLineWidth(5.0f);

    // First line (Gradient from Green to Red)
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, 10.0f);
    glVertex2f(0.0f, 10.0f);

    glEnd();

    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Gradient Zigzag Lines");

    gluOrtho2D(0.0f, 30.0f, 0.0f, 30.0f); // Smaller coordinate system

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/