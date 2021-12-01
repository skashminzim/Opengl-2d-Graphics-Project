#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<MMSYSTEM.h>
float angle1 = 0.0f;
float angle2 = 0.0f;
float tx1 = 0;
float ty1 = 0;
float tx2 = 0;
float ty2 = 0;
float tx3 = 0;
float ty3 = 0;
float tx4 = 0;
float ty4 = 0;
float tx5 = 0;
float ty5 = 0;
float tx6 = 0;
float ty6 = 0;
float tx7 = 0;
float ty7 = 0;
float tx8 = 0;
float ty8 = 0;
float tx9 = 0;
float ty9 = 0;
int m_status = 0;
float p2 = 0;
float p3 = 0;
float p4 = 0;
//int meghStatus = 1;

float move, angle;
       void play_music(){PlaySound("yellow.wav", NULL, ASYNC_MODE_COMPATIBILITY);}
       void music1()
       {//glClear(GL_COLOR_BUFFER_BIT);
        if(m_status==1){
        glPushMatrix();

        glTranslatef(tx1,ty1,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8, 2.9);
        glVertex2f(-5.8,3);
        glVertex2f(-6,2.9);
        glVertex2f(-6, 2.85);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8, 2.9);
        glVertex2f(-5.8,2.9);
        glVertex2f(-6,2.5);
        glVertex2f(-6, 2.4);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96, y + 2.40);//output vertex

		}
		glEnd();
		glPopMatrix();
    //glLoadIdentity();
	//glFlush();
        if(tx1<=0.5){
            tx1=tx1+0.1; //every time when the value of p increases, it moves a little bit right
            ty1=ty1+0.1;}
        else{
            tx1=0;
            ty1=0;}
        //PlaySound("yellow.wav", NULL, ASYNC_MODE_COMPATIBILITY);
       }}
        void music2()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx2,ty2,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-3, 2.9);
        glVertex2f(-5.8-3,3);
        glVertex2f(-6-3,2.9);
        glVertex2f(-6-3, 2.85);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-3, 2.9);
        glVertex2f(-5.8-3,2.9);
        glVertex2f(-6-3,2.5);
        glVertex2f(-6-3, 2.4);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-3, y + 2.40);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx2>=-0.7){
            tx2=tx2-0.1; //every time when the value of p increases, it moves a little bit right
            ty2=ty2+0.08;}
        else{
            tx2=0;
            ty2=0;}
       }}
        void music3()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx3,ty3,0);
        glColor3f(0,0,0);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-0.5, 2.9-0.5);
        glVertex2f(-5.8-0.5,3-0.5);
        glVertex2f(-6-0.5,2.9-0.5);
        glVertex2f(-6-0.5, 2.85-0.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-0.5, 2.9-0.5);
        glVertex2f(-5.8-0.5,2.9-0.5);
        glVertex2f(-6-0.5,2.5-0.5);
        glVertex2f(-6-0.5, 2.4-0.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-0.5, y + 2.40-0.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx3>=-0.61){
            tx3=tx3-0.1; //every time when the value of p increases, it moves a little bit right
            ty3=ty2+0.13;}
        else{
            tx3=0;
            ty3=0;}
       }}
        void music4()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx4,ty4,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-1.3, 2.9+0.5);
        glVertex2f(-5.8-1.3,3+0.5);
        glVertex2f(-6-1.3,2.9+0.5);
        glVertex2f(-6-1.3, 2.85+0.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-1.3, 2.9+0.5);
        glVertex2f(-5.8-1.3,2.9+0.5);
        glVertex2f(-6-1.3,2.5+0.5);
        glVertex2f(-6-1.3, 2.4+0.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-1.3, y + 2.40+0.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx4>=-1.0){
            tx4=tx4-0.05; //every time when the value of p increases, it moves a little bit right
            ty4=ty4+0.14;}
        else{
            tx4=0;
            ty4=0;}
       }}
        void music5()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx5,ty5,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-1, 2.9+1.5);
        glVertex2f(-5.8-1,3+1.5);
        glVertex2f(-6-1,2.9+1.5);
        glVertex2f(-6-1, 2.85+1.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-1, 2.9+1.5);
        glVertex2f(-5.8-1,2.9+1.5);
        glVertex2f(-6-1,2.5+1.5);
        glVertex2f(-6-1, 2.4+1.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-1, y + 2.40+1.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx5>=-0.6 && ty5<=0.9){
            tx5=tx5-0.02; //every time when the value of p increases, it moves a little bit right
            ty5=ty5+0.05;}
        else{
            tx5=0;
            ty5=0;}
       }}
        void music6()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx6,ty6,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-2, 2.9-0.3);
        glVertex2f(-5.8-2,3-0.3);
        glVertex2f(-6-2,2.9-0.3);
        glVertex2f(-6-2, 2.85-0.3);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-2, 2.9-0.3);
        glVertex2f(-5.8-2,2.9-0.3);
        glVertex2f(-6-2,2.5-0.3);
        glVertex2f(-6-2, 2.4-0.3);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-2, y + 2.40-0.3);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx6<=0.6){
            tx6=tx6+0.05; //every time when the value of p increases, it moves a little bit right
            ty6=ty6+0.08;}
        else{
            tx6=0;
            ty6=0;}
       }}
        void music7()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx7,ty7,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-2.5, 2.9+1.5);
        glVertex2f(-5.8-2.5,3+1.5);
        glVertex2f(-6-2.5,2.9+1.5);
        glVertex2f(-6-2.5, 2.85+1.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-2.5, 2.9+1.5);
        glVertex2f(-5.8-2.5,2.9+1.5);
        glVertex2f(-6-2.5,2.5+1.5);
        glVertex2f(-6-2.5, 2.4+1.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-2.5, y + 2.40+1.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx7>=-0.6 && ty7<=0.9){
            tx7=tx7-0.02; //every time when the value of p increases, it moves a little bit right
            ty7=ty7+0.05;}
        else{
            tx7=0;
            ty7=0;}
       }}
        void music8()
       {if(m_status==1){
         glPushMatrix();

        glTranslatef(tx8,ty8,0);
        glColor3f(0,0,0);
        //glColor3f(150.0/255.0f, 150.0/255.0f, 150.0/255.0f);
        glBegin(GL_QUADS);
        glVertex2f(-5.8+0.2, 2.9+1.5);
        glVertex2f(-5.8+0.2,3+1.5);
        glVertex2f(-6+0.2,2.9+1.5);
        glVertex2f(-6+0.2, 2.85+1.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8+0.2, 2.9+1.5);
        glVertex2f(-5.8+0.2,2.9+1.5);
        glVertex2f(-6+0.2,2.5+1.5);
        glVertex2f(-6+0.2, 2.4+1.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96+0.2, y + 2.40+1.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx8<=0.6){
            tx8=tx8+0.05; //every time when the value of p increases, it moves a little bit right
            ty8=ty8+0.05;}
        else{
            tx8=0;
            ty8=0;}
       }}
       void music9()
       {if(m_status==1){
        glPushMatrix();

        glTranslatef(tx9,ty9,0);
        glColor3f(0,0,0);
        glBegin(GL_QUADS);
        glVertex2f(-5.8-0.5, 2.9+1.5);
        glVertex2f(-5.8-0.5,3+1.5);
        glVertex2f(-6-0.5,2.9+1.5);
        glVertex2f(-6-0.5, 2.85+1.5);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-5.8-0.5, 2.9+1.5);
        glVertex2f(-5.8-0.5,2.9+1.5);
        glVertex2f(-6-0.5,2.5+1.5);
        glVertex2f(-6-0.5, 2.4+1.5);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x -5.96-0.5, y + 2.40+1.5);//output vertex

		}
		glEnd();
		glPopMatrix();
        if(tx9<=0.55){
            tx9=tx9+0.06; //every time when the value of p increases, it moves a little bit right
            ty9=ty9+0.13;}
        else{
            tx9=0;
            ty9=0;}
       }}
		/*void DrawCircle(float cx, float cy, float r, int num_segments){

		 glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < num_segments; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

		}
		glEnd();
	}*/
////middle megh
	void megh1(int x){

	glColor3f(240.0/255.0f, 240.0/255.0f, 240.0/255.0f);
	//DrawCircle(3.50, 7.1300, .55, 2000);//1
	glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .55 * cosf(theta);//calculate the x component
		float y = .55 * sinf(theta);//calculate the y component

		glVertex2f(x + 3.80, y + 7.300);//output vertex

		}
		glEnd();
	//DrawCircle(4.50,7.1300, .8, 2000);//2
	glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .8 * cosf(theta);//calculate the x component
		float y = .8 * sinf(theta);//calculate the y component

		glVertex2f(x + 4.80, y + 7.300);//output vertex

		}
		glEnd();
	//DrawCircle(5.50, 7.1300, .55, 2000);//3
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .55 * cosf(theta);//calculate the x component
		float y = .55 * sinf(theta);//calculate the y component

		glVertex2f(x + 5.80, y + 7.300);//output vertex

		}
		glEnd();
	}

	void movemegh1()

	{
   //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

   glTranslatef(p2,0,0);
   megh1(0.1);
   glPopMatrix();
    //glLoadIdentity();
	//glFlush();
    if(p2<=2.7)
      p2=p2+0.025; //every time when the value of p increases, it moves a little bit right

  else
       p2=0; //when the quad reaches the right end of the screen, set the value of p again to -100, that is the leftmost screen value
	}
	void megh2(int x){
	//DrawCircle(5.00, 5.00, .60, 2000);//1
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .6 * cosf(theta);//calculate the x component
		float y = .6 * sinf(theta);//calculate the y component

		glVertex2f(x + 5.00, y + 5.00);//output vertex

		}
		glEnd();
	//DrawCircle(6.00,5.00, .80, 2000);//2
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .8 * cosf(theta);//calculate the x component
		float y = .8 * sinf(theta);//calculate the y component

		glVertex2f(x + 6.00, y + 5.00);//output vertex

		}
		glEnd();
	//DrawCircle(7.00, 5.00, .6, 2000);//3
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .6 * cosf(theta);//calculate the x component
		float y = .6 * sinf(theta);//calculate the y component

		glVertex2f(x + 7.00, y + 5.00);//output vertex

		}
		glEnd();
	}
	void movemegh2()

	{
   //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

   glTranslatef(p3,0,0);
   megh2(0.1);
   glPopMatrix();
    //glLoadIdentity();
	//glFlush();
    if(p3<=1.677)
      p3=p3+0.025; //every time when the value of p increases, it moves a little bit right

  else
       p3=-1; //when the quad reaches the right end of the screen, set the value of p again to -100, that is the leftmost screen value
	}
	void megh3(int x){
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .6 * cosf(theta);//calculate the x component
		float y = .6 * sinf(theta);//calculate the y component

		glVertex2f(x + 5.90, y + 9.200);//output vertex

		}
		glEnd();
	//DrawCircle(6.00,5.00, .80, 2000);//2
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .8 * cosf(theta);//calculate the x component
		float y = .8 * sinf(theta);//calculate the y component

		glVertex2f(x + 7.00, y + 9.200);//output vertex

		}
		glEnd();
	//DrawCircle(7.00, 5.00, .6, 2000);//3
        glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .6 * cosf(theta);//calculate the x component
		float y = .6 * sinf(theta);//calculate the y component

		glVertex2f(x + 7.90, y + 9.200);//output vertex

		}
		glEnd();
	}
	void movemegh3()

	{
   //glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
   glTranslatef(p4,0,0);
   megh3(0.1);
   glPopMatrix();
    if(p4<=0.8)
      p4=p4+0.025; //every time when the value of p increases, it moves a little bit right

  else
       p4=-2; //when the quad reaches the right end of the screen, set the value of p again to -100, that is the leftmost screen value
	}
void Initialize( )
{
glClearColor(250.0/255.0f, 230.0/255.0f, 230.0/255.0f, 1.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10, 10.0, -9, 13.0, 13.0, -10.0);
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
//floor
glColor3f(205/255.0f, 197/255.0f, 191/255.0f);
glBegin(GL_QUADS);
 glVertex2f(-10.0, -7.0);
 glVertex2f(10.0, -7.0);
 glVertex2f(10.0, -9);
 glVertex2f(-10.0, -9);
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
ori_x1 = -8.55;                         // // the origin of right music circle
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
///dressing table///////////////////////////////////////////////////////////////////////////////////
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
///tool
glColor3f(160/255.0f, 82/255.0f, 45/255.0f);
glBegin(GL_POLYGON);
 glVertex2f(-2.2, -7.2);
 glVertex2f(-2, -7.2);
 glVertex2f(-2, -3);
 glVertex2f(-2.2, -3);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(-1, -7.2);
 glVertex2f(-0.8, -7.2);
 glVertex2f(-0.8, -3);
 glVertex2f(-1, -3);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(-2.2, -3);
 glVertex2f(-2.2, -3.8);
 glVertex2f(-0.8, -3.8);
 glVertex2f(-0.8, -3);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(-2.2, -6.5);
 glVertex2f(-2.2, -6.1);
 glVertex2f(-0.8, -6.1);
 glVertex2f(-0.8, -6.5);
glEnd();
glColor3f(205/255.0f, 133/255.0f, 63/255.0f);
glBegin(GL_POLYGON);
 glVertex2f(-2., -3.8);
 glVertex2f(-2, -3.95);
 glVertex2f(-1, -3.95);
 glVertex2f(-1, -3.8);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(-2., -6.5);
 glVertex2f(-2, -6.6);
 glVertex2f(-1, -6.6);
 glVertex2f(-1, -6.5);
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
///plant///////////
//base//

glColor3f(218/255.0f, 185/255.0f, 32/255.0f);
glBegin(GL_QUADS);
 glVertex2f(2.97, -7.2);
 glVertex2f(3.63, -7.2);
 glVertex2f(3.93, -5.2);
 glVertex2f(2.62, -5.2);
glEnd();
//glColor3f(139/255.0f, 139/255.0f, 122/255.0f);
glColor3f(184/255.0f, 134/255.0f, 11/255.0f);
glBegin(GL_QUADS);
 glVertex2f(3.0, -7.2);
 glVertex2f(3.6, -7.2);
 glVertex2f(3.9, -5.2);
 glVertex2f(2.65, -5.2);
glEnd();
//leaf//
glColor3f(0/255.0f, 238/255.0f, 0/255.0f);
glBegin(GL_QUADS);
 glVertex2f(3.25, -5.2);
 glVertex2f(3.3, -5.2);
 glVertex2f(3.73, -2.2);
 glVertex2f(3.77, -2.2);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(3.4, -3.9);
 glVertex2f(3.6, -3.2);
 glVertex2f(3.8, -4);
 glVertex2f(3.6, -4.3);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(3.68, -2.9);
 glVertex2f(3.2, -2.2);
 glVertex2f(3.0, -3);
 glVertex2f(2.98, -2.8);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(3.68, -2.65);
 glVertex2f(3.9, -2.2);
 glVertex2f(4.0, -2.55);
 glVertex2f(4.28, -2.75);
glEnd();
//up leaf
glBegin(GL_QUADS);
 glVertex2f(3.75, -2.3);
 glVertex2f(3.95, -1.9);
 glVertex2f(3.86, -1);
 glVertex2f(3.58, -1.6);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(2.99, -3.8);
 glVertex2f(2.7, -4.75);
 glVertex2f(2.95, -4.6);
 glVertex2f(3.25, -5.2);
glEnd();
glBegin(GL_POLYGON);
 glVertex2f(3.39+0.4, -4.2);
 glVertex2f(3.5+0.5, -4.65);
 glVertex2f(3.35+0.4, -4.55);
 glVertex2f(3.25, -5.2);
glEnd();
//sofa
glColor3f(0,0,0);
//leg
glBegin(GL_QUADS);
 glVertex2f(4.9, -7.2);
 glVertex2f(5.1, -7.2);
 glVertex2f(5.1, -6.63);
 glVertex2f(4.9, -6.63);
glEnd();
glBegin(GL_QUADS);
 glVertex2f(8.7, -7.2);
 glVertex2f(8.5, -7.2);
 glVertex2f(8.5, -6.63);
 glVertex2f(8.7, -6.63);
glEnd();
//seat
glColor3f(176/255.0f, 69/255.0f, 19/255.0f);
 glBegin(GL_QUADS);
 glVertex2f(5.5, -2);
 glVertex2f(8.1, -2);
 glVertex2f(8.1, -4);
 glVertex2f(5.5, -4);
glEnd();

//glColor3f(139/255.0f, 26/255.0f, 26/255.0f);
glColor3f(176/255.0f, 69/255.0f, 19/255.0f);
glBegin(GL_POLYGON);
 glVertex2f(4.5, -6.799);
 glVertex2f(9.1, -6.799);
 glVertex2f(9.1, -4);
 glVertex2f(4.5, -4);
 glEnd();
glColor3f(139/255.0f, 26/255.0f, 26/255.0f);
 glBegin(GL_POLYGON);
 glVertex2f(4.55, -6.699);
 glVertex2f(9.05, -6.699);
 glVertex2f(9.05, -4.1);
 glVertex2f(4.55, -4.1);
 glEnd();

glColor3f(176/255.0f, 69/255.0f, 19/255.0f);
//left hand
 glBegin(GL_QUADS);
 glVertex2f(4.5, -2);
 glVertex2f(5.5, -2);
 glVertex2f(5.5, -4);
 glVertex2f(4.5, -4);
glEnd();
glColor3f(139/255.0f, 26/255.0f, 26/255.0f);
 glBegin(GL_POLYGON);
 glVertex2f(4.55, -2.05);
 glVertex2f(5.45, -2.05);
 glVertex2f(5.45, -4.15);
 glVertex2f(4.55, -4.15);
 glEnd();
glColor3f(176/255.0f, 69/255.0f, 19/255.0f);
//right hand
 glBegin(GL_QUADS);
 glVertex2f(9.1, -2);
 glVertex2f(8.1, -2);
 glVertex2f(8.1, -4);
 glVertex2f(9.1, -4);
glEnd();
glColor3f(139/255.0f, 26/255.0f, 26/255.0f);
glBegin(GL_QUADS);
 glVertex2f(9.05, -2.05);
 glVertex2f(8.15, -2.05);
 glVertex2f(8.15, -4.5);
 glVertex2f(9.05, -4.5);
 glEnd();
 //pith
glColor3f(139/255.0f, 26/255.0f, 26/255.0f);
 glBegin(GL_QUADS);
 glVertex2f(5.35, -2.9);
 glVertex2f(8.25, -2.9);
 glVertex2f(8.36, 1);
 glVertex2f(5.24, 1);
glEnd();
//glColor3f(0,0,0);
glColor3f(176/255.0f, 69/255.0f, 19/255.0f);
 glBegin(GL_LINES);
 glVertex2f(5.45, -2);
 glVertex2f(5.45, -4);
glEnd();
 glBegin(GL_LINES);
 glVertex2f(5.45, -2.05);
 glVertex2f(5.45, -4.15);
glEnd();
 glBegin(GL_LINES);
 glVertex2f(8.15, -2);
 glVertex2f(8.15, -4);
glEnd();
 glBegin(GL_LINES);
 glVertex2f(8.15, -2.05);
 glVertex2f(8.15, -4.15);
glEnd();
//pithe dot
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +5.925, y + 0);//output vertex

		}
		glEnd();
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +7.6, y +0);//output vertex

		}
		glEnd();
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +5.925, y -.8);//output vertex

		}
		glEnd();
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +7.6, y -.8);//output vertex

		}
		glEnd();
		glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +5.925, y -.8-.8);//output vertex

		}
		glEnd();
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .07 * cosf(theta);//calculate the x component
		float y = .08 * sinf(theta);//calculate the y component

		glVertex2f(x +7.6, y -.8-.8);//output vertex

		}
		glEnd();
//clock
//glColor3f(0,0,0);
glColor3f(93/255.0f, 71/255.0f, 139/255.0f);
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .9 * cosf(theta);//calculate the x component
		float y = 1.4 * sinf(theta);//calculate the y component

		glVertex2f(x -7.5, y + 10);//output vertex

		}
		glEnd();
glColor3f(1,1,1);
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .8 * cosf(theta);//calculate the x component
		float y = 1.3 * sinf(theta);//calculate the y component

		glVertex2f(x -7.5, y + 10);//output vertex

		}
		glEnd();
//center dot
glColor3f(0,0,0);
glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < 20000; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(20000);//get the current angle

		float x = .06 * cosf(theta);//calculate the x component
		float y = .07 * sinf(theta);//calculate the y component

		glVertex2f(x -7.5, y + 10);//output vertex

		}
		glEnd();
//boro kata
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-7.5f, 10.0f, 0.0f);
glRotatef(angle1, 0.0f,0.0f, 1.0f);
glTranslatef(7.5f,-10.0f, 0.0f);
/*glBegin(GL_TRIANGLES);
 glVertex2f(-7.52, 10.05);
  glVertex2f(-7.46, 9.95);
  glVertex2f(-7.5, 10.8);
glEnd();*/
glLineWidth(2.0f);
glBegin(GL_LINES);
  glVertex2f(-7.5, 10.66);
  glVertex2f(-7.5, 10);
glEnd();
glPopMatrix();
glLineWidth(1.0f);
//choto kata
glPushMatrix();
glTranslatef(-7.5f, 10.0f, 0.0f);
glRotatef(angle2, 0.0f,0.0f, 1.0f);
glTranslatef(7.5f,-10.0f, 0.0f);
glLineWidth(3.0f);
glBegin(GL_LINES);
  glVertex2f(-7.5, 10.45);
  glVertex2f(-7.5, 10);
glEnd();
glPopMatrix();
glLineWidth(1.0f);
movemegh1();
movemegh2();
movemegh3();
glPopMatrix();
music1();//right_er_right
music2();//musicbox_left_left
music3();//right er vetor
music4();//right er left
music5();//right er left
music6();//left er right
music7();//left er upor
music8();//right er right
music9();

glFlush();
glutPostRedisplay();
}
void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_UP:
		    m_status=1;
		    //PlaySound("yellow.wav", NULL, ASYNC_MODE_COMPATIBILITY);
		    sndPlaySound("yellow.wav", SND_ASYNC | SND_FILENAME|SND_LOOP);
            glFlush();
            glutPostRedisplay();
            break;
	  default:
			break;
	}
}
void update(int value){
    angle1-=2.0f;
    if(angle1>360.0){
        angle1-=360;
    }
    glutPostRedisplay();
    glutTimerFunc(10,update, 0);
}
void update1(int value){
    angle2-=2.0f;
    if(angle2>360.0){
        angle2-=360;
    }
    glutPostRedisplay();
    glutTimerFunc(950,update1, 0);
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
glutSpecialFunc(spe_key);
//play_music();
//sndPlaySound("yellow.wav", SND_ASYNC);
glutTimerFunc(10,update, 0);
glutTimerFunc(950,update1, 0);
glutMainLoop();
return 0;
}
