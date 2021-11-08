#include<windows.h>
#include <GL/glut.h>
#include<math.h>

void Initialize( )
{
glClearColor(250.0/255.0f, 230.0/255.0f, 230.0/255.0f, 1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10, 10.0, -10, 13.0, 13.0, -10.0);
}

void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
///walk border
glColor3f(255/255.0f, 225/255.0f, 173/255.0f);
glBegin(GL_QUADS);
 glVertex2f(-10.0, -7.0);
 glVertex2f(10.0, -7.0);
 glVertex2f(10.0, -6.2);
 glVertex2f(-10.0, -6.2);
glEnd();
///////////////////////box///////////////////////
///box border
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
 glVertex2f(-9.1, -7.2);
 glVertex2f(-5.9, -7.2);
 glVertex2f(-5.9, 1.6);
 glVertex2f(-9.1, 1.6);
glEnd();
///box
glColor3f(0.9, 0.1, 0.0);
glBegin(GL_QUADS);
 glVertex2f(-9.0, -7.1);
 glVertex2f(-6.0, -7.1);
 glVertex2f(-6.0, 1.5);
 glVertex2f(-9.0, 1.5);
glEnd();
///drawer
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
 glVertex2f(-9.1, -5.0);
 glVertex2f(-5.9, -5.0);
glVertex2f(-5.9, -5.1);
 glVertex2f(-9.1, -5.1);
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.18;
    glVertex2f(-7.5 + x1, -5.8 + y1);
}
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-9.1, -3.0);
 glVertex2f(-5.9, -3.0);
 glVertex2f(-5.9, -3.1);
 glVertex2f(-9.1, -3.1);
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.18;
    glVertex2f(-7.5 + x1, -3.8 + y1);
}
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-9.1, -1.0);
 glVertex2f(-5.9, -1.0);
 glVertex2f(-5.9, -1.1);
 glVertex2f(-9.1, -1.1);
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.18;
    glVertex2f(-7.5 + x1, -1.8 + y1);
}
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-7.5, 1.5);
 glVertex2f(-7.56, 1.5);
 glVertex2f(-7.56, -1.1);
 glVertex2f(-7.5, -1.1);
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.18;
    glVertex2f(-7.78 + x1, 0.2 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.18;
    glVertex2f(-7.3 + x1, 0.2 + y1);
}
glEnd();
///music box
glColor3f(210/255.0f, 105/255.0f, 30/255.0f);
glBegin(GL_QUADS);
 glVertex2f(-6.8, 1.6);
 glVertex2f(-6.1, 1.6);
 glVertex2f(-6.1, 4.0);
 glVertex2f(-6.8, 4.0);
glEnd();

glBegin(GL_QUADS);
 glVertex2f(-8.9, 1.6);
 glVertex2f(-8.2, 1.6);
 glVertex2f(-8.2, 4.0);
 glVertex2f(-8.9, 4.0);
glEnd();
//inner circles
glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
glBegin(GL_POLYGON);                        // Middle circle
double ori_x1 = -6.45;                         // the origin of left music cricle
double ori_y1 = 2.18;
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.2;
    double y1 = sin(angle) * 0.45;
    glVertex2f(ori_x1 + x1, ori_y1 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.3;
    glVertex2f(ori_x1 + x1, 3.06 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.08;
    double y1 = sin(angle) * 0.18;
    glVertex2f(ori_x1 + x1, 3.61 + y1);
}
glEnd();
glBegin(GL_POLYGON);                        // Middle circle
ori_x1 = -8.55;                         // // the origin of right music cricle
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.2;
    double y1 = sin(angle) * 0.45;
    glVertex2f(ori_x1 + x1, ori_y1 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.1;
    double y1 = sin(angle) * 0.3;
    glVertex2f(ori_x1 + x1, 3.06 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.08;
    double y1 = sin(angle) * 0.18;
    glVertex2f(ori_x1 + x1, 3.61 + y1);
}
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.15;
    double y1 = sin(angle) * 0.38;
    glVertex2f(ori_x1 + x1, ori_y1 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.07;
    double y1 = sin(angle) * 0.24;
    glVertex2f(ori_x1 + x1, 3.06 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.05;
    double y1 = sin(angle) * 0.14;
    glVertex2f(ori_x1 + x1, 3.61 + y1);
}
glEnd();
ori_x1 = -6.45;
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.15;
    double y1 = sin(angle) * 0.38;
    glVertex2f(ori_x1 + x1, ori_y1 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.07;
    double y1 = sin(angle) * 0.24;
    glVertex2f(ori_x1 + x1, 3.06 + y1);
}
glEnd();
glBegin(GL_POLYGON);
for (int i = 0; i <= 50000; i++) {
    double angle =  2*3.1416 * i /50000;
    double x1 = cos(angle) * 0.05;
    double y1 = sin(angle) * 0.14;
    glVertex2f(ori_x1 + x1, 3.61 + y1);
}
glEnd();
///dressing table//////////////////////////////////
glColor3f(160/255.0f, 82/255.0f, 45/255.0f);
glBegin(GL_QUADS);
 glVertex2f(-5.3, -7.2);
 glVertex2f(-3, -7.2);
 glVertex2f(-3, 0.5);
 glVertex2f(-5.3, 0.5);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.0, -7.2);
 glVertex2f(2.3, -7.2);
 glVertex2f(2.3, 0.5);
 glVertex2f(0.0, 0.5);
glEnd();
glColor3f(205/255.0f, 133/255.0f, 63/255.0f);
glBegin(GL_QUADS);
 glVertex2f(-5.5, 0.5);
 glVertex2f(2.5, 0.5);
 glVertex2f(2.5, 1.6);
 glVertex2f(-5.5, 1.6);
glEnd();
///Dressing table drawer border
glColor3f(244/255.0f, 166/255.0f, 96/255.0f);
//left
glBegin(GL_QUADS);
 glVertex2f(-5, -6.9);
 glVertex2f(-3.3, -6.9);
 glVertex2f(-3.3, -4.9);
 glVertex2f(-5, -4.9);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-5, -4.6);
 glVertex2f(-3.3, -4.6);
 glVertex2f(-3.3, -2.6);
 glVertex2f(-5, -2.6);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-5, -2.3);
 glVertex2f(-3.3, -2.3);
 glVertex2f(-3.3, -0.3);
 glVertex2f(-5, -0.3);
glEnd();
//right
glBegin(GL_QUADS);
 glVertex2f(0.3, -6.9);
 glVertex2f(2, -6.9);
 glVertex2f(2, -4.9);
 glVertex2f(0.3, -4.9);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.3, -4.6);
 glVertex2f(2, -4.6);
 glVertex2f(2, -2.6);
 glVertex2f(0.3, -2.6);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.3, -2.3);
 glVertex2f(2, -2.3);
 glVertex2f(2, -0.3);
 glVertex2f(0.3, -0.3);
glEnd();
///Dressing table drawer
glColor3f(205/255.0f, 133/255.0f, 63/255.0f);
//left
glBegin(GL_QUADS);
 glVertex2f(-4.95, -6.8);
 glVertex2f(-3.35, -6.8);
 glVertex2f(-3.35, -5);
 glVertex2f(-4.95, -5);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-4.95, -4.5);
 glVertex2f(-3.35, -4.5);
 glVertex2f(-3.35, -2.7);
 glVertex2f(-4.95, -2.7);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-4.95, -2.2);
 glVertex2f(-3.35, -2.2);
 glVertex2f(-3.35, -0.4);
 glVertex2f(-4.95, -0.4);
glEnd();
//right
glBegin(GL_QUADS);
 glVertex2f(0.35, -6.8);
 glVertex2f(1.95, -6.8);
 glVertex2f(1.95, -5);
 glVertex2f(0.35, -5);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.35, -4.5);
 glVertex2f(1.95, -4.5);
 glVertex2f(1.95, -2.7);
 glVertex2f(0.35, -2.7);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.35, -2.2);
 glVertex2f(1.95, -2.2);
 glVertex2f(1.95, -0.4);
 glVertex2f(0.35, -0.4);
glEnd();
///dressing table drawer hook
glColor3f(139/255.0f, 69/255.0f, 19/255.0f);
//left
glBegin(GL_QUADS);
 glVertex2f(-4.33, -5.6);
 glVertex2f(-4.00, -5.6);
 glVertex2f(-4.00, -5.3);
 glVertex2f(-4.33, -5.3);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-4.33, -3);
 glVertex2f(-4.00, -3);
 glVertex2f(-4.00, -3.3);
 glVertex2f(-4.33, -3.3);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(-4.33, -0.7);
 glVertex2f(-4.00, -0.7);
 glVertex2f(-4.00, -1);
 glVertex2f(-4.33, -1);
glEnd();
//right
glBegin(GL_QUADS);
 glVertex2f(0.97, -5.6);
 glVertex2f(1.3, -5.6);
 glVertex2f(1.3, -5.3);
 glVertex2f(0.97, -5.3);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.97, -3);
 glVertex2f(1.3, -3);
 glVertex2f(1.3, -3.3);
 glVertex2f(0.97, -3.3);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(0.97, -0.7);
 glVertex2f(1.3, -0.7);
 glVertex2f(1.3, -1);
 glVertex2f(0.97, -1);
glEnd();
///window border
glColor3f(160/255.0f, 82/255.0f, 45/255.0f);
glBegin(GL_QUADS);
 glVertex2f(3, 1.8);
 glVertex2f(9.5, 1.8);
 glVertex2f(9.5, 11.93);
 glVertex2f(3, 11.93);
glEnd();
//window
glColor3f(135/255.0f, 206/255.0f, 255/255.0f);
glBegin(GL_QUADS);
 glVertex2f(3.2, 2.25);
 glVertex2f(9.3, 2.25);
 glVertex2f(9.3, 11.6);
 glVertex2f(3.2, 11.6);
glEnd();
glColor3f(176/255.0f, 226/255.0f, 255/255.0f);
glBegin(GL_POLYGON);
 glVertex2f(3.2, 2.25);
 //glVertex2f(9.3, 2);
 glVertex2f(9.3, 11.6);
 glVertex2f(3.2, 11.6);
glEnd();
///dressing table mirror
//bprder
glColor3f(205/255.0f, 133/255.0f, 63/255.0f);
glBegin(GL_POLYGON);                        // Middle circle
double r1 = 3;
double r2 = 4;
double ori_x = -1.5;                         // the origin or center of circle
double ori_y = 6;
for (int i = 0; i <= 50000; i++) {
    double angle = 2 * 3.1416 * i / 50000;
    double x = cos(angle) * r1;
    double y = sin(angle) * r2;
    glVertex2d(ori_x + x, ori_y + y);
}
glEnd();
//vetor
glColor3f(198/255.0f, 226/255.0f, 255/255.0f);
glBegin(GL_POLYGON);                        // Middle circle
double r3 = 2.5;
double r4 = 3.75;
//double ori_x = -1.5;                         // the origin or center of circle
//double ori_y = 6;
for (int i = 0; i <= 50000; i++) {
    double angle = 2 * 3.1416 * i / 50000;
    double x = cos(angle) * r3;
    double y = sin(angle) * r4;
    glVertex2d(ori_x + x, ori_y + y);
}
glEnd();

glFlush();
}


int main(int iArgc , char** cppArgv)
{
glutInit(&iArgc , cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize(1250,600);
glutInitWindowPosition(200,200);
glutCreateWindow("Dressing Room");


Initialize();


glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
