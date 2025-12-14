/*
#include <GL/glut.h>
#include <math.h>

// tiny HSV->RGB (h in [0,1))
static void hsv2rgb(float h, float* r, float* g, float* b) {
    float i = floorf(h * 6.f), f = h * 6.f - i;
    float p = 0.f, q = 1.f - f, t = f;
    switch (((int)i) % 6) {
    case 0:*r = 1;*g = t;*b = 0;break;
    case 1:*r = q;*g = 1;*b = 0;break;
    case 2:*r = 0;*g = 1;*b = t;break;
    case 3:*r = 0;*g = q;*b = 1;break;
    case 4:*r = t;*g = 0;*b = 1;break;
    default:*r = 1;*g = 0;*b = q;break;
    }
}

void display() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glShadeModel(GL_SMOOTH);

    // ----- Geometry (balanced isosceles triangles) -----
    const float yB = 4.f;           // common baseline

    // Bigger base lengths
    const float base1 = 7.f;
    const float base2 = 7.f;
    const float base3 = 7.f;

    // Bigger peak heights
    const float h1 = 10.f;
    const float h2 = 10.f;
    const float h3 = 10.f;

    // Base x positions
    const float x0 = 4.f;
    const float x2 = x0 + base1;    // end of base 1
    const float x4 = x2 + base2;    // end of base 2
    const float x6 = x4 + base3;    // end of base 3

    // Apexes at midpoints of adjacent bases
    const float x1 = 0.5f * (x0 + x2), y1 = yB + h1;
    const float x3 = 0.5f * (x2 + x4), y3 = yB + h2;
    const float x5 = 0.5f * (x4 + x6), y5 = yB + h3;

    // ----- 1) Filled strip with smooth colors -----
    glBegin(GL_TRIANGLE_STRIP);
    { float r, g, b; hsv2rgb(0.00f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x0, yB); }
    { float r, g, b; hsv2rgb(0.14f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x1, y1); }
    { float r, g, b; hsv2rgb(0.28f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x2, yB); }
    { float r, g, b; hsv2rgb(0.43f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x3, y3); }
    { float r, g, b; hsv2rgb(0.57f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x4, yB); }
    { float r, g, b; hsv2rgb(0.71f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x5, y5); }
    { float r, g, b; hsv2rgb(0.86f, &r, &g, &b); glColor3f(r, g, b); glVertex2f(x6, yB); }
    glEnd();

    // ----- 2) Black separators to make triangles pop -----
    glColor3f(0, 0, 0);
    glLineWidth(2.f);

    glBegin(GL_LINE_STRIP);
    glVertex2f(x0, yB);
    glVertex2f(x1, y1);
    glVertex2f(x2, yB);
    glVertex2f(x3, y3);
    glVertex2f(x4, yB);
    glVertex2f(x5, y5);
    glVertex2f(x6, yB);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(x1, y1); glVertex2f(x2, yB);
    glVertex2f(x3, y3); glVertex2f(x4, yB);
    glVertex2f(x5, y5); glVertex2f(x6, yB);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(820, 300);
    glutCreateWindow("Triangle Strip — five triangles (smooth colors)");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.f, 30.f, 0.f, 30.f);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/