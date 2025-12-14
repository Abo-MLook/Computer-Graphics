#include <GL/glut.h>
#include <math.h>

float angle = 0.0f;  // Rotation angle for animation

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Move the object away from the camera
    glTranslatef(0.0f, 0.0f, -5.0f);

    // Apply rotation for animation
    glRotatef(angle, 0.0f, 1.0f, 0.0f);  // Rotate around Y-axis
    glRotatef(angle * 0.5f, 1.0f, 0.0f, 0.0f);  // Rotate around X-axis

    // Draw a colorful pyramid
    glBegin(GL_TRIANGLES);

    // Front face (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);   // Top
    glVertex3f(-1.0f, -1.0f, 1.0f); // Bottom left
    glVertex3f(1.0f, -1.0f, 1.0f);  // Bottom right

    // Right face (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);   // Top
    glVertex3f(1.0f, -1.0f, 1.0f);  // Bottom left
    glVertex3f(1.0f, -1.0f, -1.0f); // Bottom right

    // Back face (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);    // Top
    glVertex3f(1.0f, -1.0f, -1.0f);  // Bottom left
    glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom right

    // Left face (Yellow)
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);    // Top
    glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom left
    glVertex3f(-1.0f, -1.0f, 1.0f);  // Bottom right

    glEnd();

    // Draw the base (square)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);  // Magenta
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glEnd();

    glutSwapBuffers();
}

void timer(int value) {
    angle += 2.0f;  // Increment rotation angle
    if (angle > 360.0f) {
        angle -= 360.0f;
    }
    glutPostRedisplay();  // Request display update
    glutTimerFunc(16, timer, 0);  // Call timer again after 16ms (~60 FPS)
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
    glutCreateWindow("Animated Pyramid");

    // Set up the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // Black background
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);  // Enable smooth color interpolation

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, timer, 0);  // Start the animation timer

    glutMainLoop();
    return 0;
}