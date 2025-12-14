/*
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_POINT_SMOOTH);
    glPointSize(30.0f);

    glLineWidth(5.0f);

    // First line (Gradient from Green to Red)
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(5.0f, 5.0f);

    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(10.0f, 25.0f);
    glEnd();

    // Second line (Gradient from Red to Blue)
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(10.0f, 25.0f);

    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(15.0f, 5.0f);
    glEnd();

    // Third line (Gradient from Blue to Magenta)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(15.0f, 5.0f);

    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glVertex2f(20.0f, 25.0f);
    glEnd();

    // Fourth line (Gradient from Magenta to Cyan)
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glVertex2f(20.0f, 25.0f);

    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glVertex2f(25.0f, 5.0f);
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