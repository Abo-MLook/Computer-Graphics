/*

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Move the object away from the camera
    glTranslatef(0.0f, 0.0f, -5.0f);

    // Draw the original triangle (pointing up)
    glBegin(GL_TRIANGLES);
    // Top vertex (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 1.2f, 0.0f);

    // Bottom left vertex (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.1f, 0.0f);

    // Bottom right vertex (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(1.0f, 0.1f, 0.0f);
    glEnd();

    // Apply reflection transformation
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(1.0f, -1.0f, 1.0f);

    // Draw the reflected triangle (pointing down)
    glBegin(GL_TRIANGLES);
    // Top vertex (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 1.2f, 0.0f);

    // Bottom left vertex (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.1f, 0.0f);

    // Bottom right vertex (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(1.0f, 0.1f, 0.0f);
    glEnd();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 27:  // ESC key
        exit(0);
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Triangle with Reflection");

    // Set up the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);  // Enable smooth color interpolation

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}

*/