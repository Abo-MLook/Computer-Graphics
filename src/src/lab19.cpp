/*
#include <GL/glut.h>

float angleX = 0.0f;  // Rotation angle around X-axis
float angleY = 0.0f;  // Rotation angle around Y-axis

void drawCube() {
    glBegin(GL_QUADS);

    // Front face (Red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);

    // Back face (Green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);

    // Top face (Blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);

    // Bottom face (Yellow)
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);

    // Right face (Magenta)
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, -1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);

    // Left face (Cyan)
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, 1.0f);
    glVertex3f(-1.0f, 1.0f, -1.0f);

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Move the cube away from the camera
    glTranslatef(0.0f, 0.0f, -7.0f);

    // Apply rotation for animation
    glRotatef(angleX, 1.0f, 0.0f, 0.0f);  // Rotate around X-axis
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);  // Rotate around Y-axis

    // Draw the cube
    drawCube();

    glutSwapBuffers();
}

void timer(int value) {
    angleX += 1.0f;  // Increment X rotation
    angleY += 1.5f;  // Increment Y rotation

    if (angleX > 360.0f) angleX -= 360.0f;
    if (angleY > 360.0f) angleY -= 360.0f;

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
    glutCreateWindow("Animated Colorful Cube");

    // Set up the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);

    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);  // Dark background
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);  // Enable smooth color interpolation

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, timer, 0);  // Start the animation timer

    glutMainLoop();
    return 0;
}

*/