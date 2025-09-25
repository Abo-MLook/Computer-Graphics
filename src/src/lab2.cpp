#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_POINT_SMOOTH);
    glPointSize(30.0f);

    glBegin(GL_POINTS);
    glColor3f(0.4f, 0.7f, 0.3f);   // Olive green
    glVertex2f(3.0f, 3.0f);   // bottom-left

    glColor3f(0.7f, 0.2f, 0.2f);   // Brownish red
    glVertex2f(12.0f, 30.0f);  // top-left

    glColor3f(0.9f, 0.5f, 0.5f);   // Soft rose
    glVertex2f(18.0f, 30.0f); // top-right

    glColor3f(0.5f, 0.6f, 0.8f);   // Light steel blue
    glVertex2f(9.0f, 3.0f);  // bottom-right
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(3.0f, 3.0f); //
    glVertex2f(12.0f, 30.0f); //

    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(9.0f, 3.0f);//
    glVertex2f(18.0f, 30.0f);//
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Small Coordinates Example");

    gluOrtho2D(0.0f, 50.0f, 0.0f, 50.0f); // smaller coordinate system

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
