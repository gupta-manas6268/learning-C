#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    // Your OpenGL drawing code here
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Example");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
