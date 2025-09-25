#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);        // Clear the screen
    glEnable(GL_POINT_SMOOTH);           // Smooth circular points
    glPointSize(40.0f);                  // Big points
    glColor3f(1.0f, 0.0f, 0.0f);         // Red dots

    glBegin(GL_POINTS);
    glVertex2f(0.0f, 0.0f);   // center
    glVertex2f(-5.0f, 5.0f);   // top-left
    glVertex2f(5.0f, 5.0f);   // top-right
    glVertex2f(-5.0f, -5.0f);   // bottom-left
    glVertex2f(5.0f, -5.0f);   // bottom-right
    glEnd();

    glFlush();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0f, 10.0f, -10.0f, 10.0f); // Coord system from -10 to +10
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Dice Face 5 - Centered");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
