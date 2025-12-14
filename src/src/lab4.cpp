/* 
#include <GL/glut.h>
#include <math.h>

static void hsv2rgb(float h, float* r, float* g, float* b) {
    float i = floorf(h * 6.0f), f = h * 6.0f - i;
    float p = 0.0f, q = 1.0f - f, t = f;
    switch ((int)i % 6) {
    case 0: *r = 1; *g = t; *b = 0; break;
    case 1: *r = q; *g = 1; *b = 0; break;
    case 2: *r = 0; *g = 1; *b = t; break;
    case 3: *r = 0; *g = q; *b = 1; break;
    case 4: *r = t; *g = 0; *b = 1; break;
    default:*r = 1; *g = 0; *b = q; break;
    }
}

void display() {
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(6.0f);

    // star vertices on a circle (center 15,15; radius 10)
    const float cx = 15.f, cy = 15.f, R = 10.f, PI = 3.1415926535f;
    float vx[5], vy[5];
    for (int i = 0;i < 5;++i) {
        float a = PI / 2.f + i * 2.f * PI / 5.f;
        vx[i] = cx + R * cosf(a);
        vy[i] = cy + R * sinf(a);
    }
    int order[5] = { 0,2,4,1,3 };

    // emit many points along each edge with changing hue
    const int S = 40;                    // samples per edge
    const int total = 5 * S;

    glBegin(GL_LINE_LOOP);
    for (int e = 0;e < 5;++e) {
        int a = order[e], b = order[(e + 1) % 5];
        for (int s = 0;s < S;++s) {
            float t = (float)s / (float)S;
            float x = vx[a] * (1 - t) + vx[b] * t;
            float y = vy[a] * (1 - t) + vy[b] * t;
            float r, g, bcol; hsv2rgb(((e * S) + s) / (float)total, &r, &g, &bcol);
            glColor3f(r, g, bcol);
            glVertex2f(x, y);
        }
    }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Colorful Star (GL_LINE_LOOP)");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.f, 30.f, 0.f, 30.f);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/