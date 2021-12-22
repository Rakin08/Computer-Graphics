#include <iostream>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


void fillCircle();
void circle(GLfloat x,GLfloat y,GLfloat radius);
GLfloat carPosition = 0.0f;
GLfloat carSpeed = 0.1f;
GLfloat busPosition = 0.0f;
GLfloat busSpeed = 0.07f;
GLfloat i = 0.0f;
///Make cloud----------------(501)
void makeCloud()
{
    glScalef(.5, .5, 0);
    glColor3ub(247, 255, 254);
    circle(0.0f, 0.0f, 0.15f);
    circle(0.2f, 0.05f, 0.2f);
    circle(0.2f, -0.05f, 0.2f);
    circle(0.38f, 0.0f, 0.15f);
    glLoadIdentity();
}

void update(int value)
{
    if(carPosition > 1.0f)
            carPosition = -1.2f;

    carPosition += carSpeed;

    if(busPosition > 1.2f)
            busPosition = -1.9f;

    busPosition += busSpeed;
    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}



void circle(GLfloat x,GLfloat y,GLfloat radius){
       int i;

	//GLfloat x=.4f; GLfloat y=.4f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    }
    ///.>>>>>>>>>>>>>>>>>>>>>>>>>...........carUpdate


   /* void Update(int value)
{

    if (carPosition > 1.0) {
        carPosition = -1.0f;
    }

    carPosition += carSpeed;


    glutPostRedisplay();



    glutTimerFunc(100, Update, 0);
}
*/


///background----------------(502)
void background()
{

    //grass
   glBegin(GL_QUADS);
glColor3ub(24, 186, 9);
glVertex2f(1.0f,0.2f);
glVertex2f(-1.0f,0.2f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);


//sky
glBegin(GL_QUADS);
glColor3ub(12, 240, 232);
glVertex2f(1.0f,0.2f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,0.2f);
glEnd();


}

///>>>>>>>>>>>>>>>>>>>..........sun


///Sun----------------(503)
 void sun(){

glTranslatef(-.23f,.93f,0);
 glColor3ub(255, 255, 128);
circle(.0f,.0f,.06f);
   glLoadIdentity();
    }



///Road----------------(504)
void Road()
{

///Road
glBegin(GL_QUADS);
glColor3ub(46, 42, 41);
glVertex2f(1.0f,0.22f);
glVertex2f(-1.0f,0.22f);
glVertex2f(-1.0f,-0.22f);
glVertex2f(1.0f,-0.22f);
glEnd();

///Up Road yellow border
glBegin(GL_QUADS);
glColor3ub(247, 195, 5);
glVertex2f(1.0f,0.22f);
glVertex2f(-1.0f,0.22f);
glVertex2f(-1.0f,0.176f);
glVertex2f(1.0f,0.176f);



///Up Road black border1
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(1.0f,0.22f);
glVertex2f(0.8f,0.22f);
glVertex2f(0.8f,0.176f);
glVertex2f(1.0f,0.176f);

///Up Road black border2
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(0.6f,0.22f);
glVertex2f(0.4f,0.22f);
glVertex2f(0.4f,0.176f);
glVertex2f(0.6f,0.176f);

///Up Road black border3
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(0.2f,0.22f);
glVertex2f(0.0f,0.22f);
glVertex2f(0.0f,0.176f);
glVertex2f(0.2f,0.176f);



///Up Road black border4
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(-0.2f,0.22f);
glVertex2f(-0.4f,0.22f);
glVertex2f(-0.4f,0.176f);
glVertex2f(-0.2f,0.176f);


///Up Road black border5
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(-0.6f,0.22f);
glVertex2f(-0.8f,0.22f);
glVertex2f(-0.8f,0.176f);
glVertex2f(-0.6f,0.176f);


///Middle Road White border1
glBegin(GL_QUADS);
glColor3ub(240, 238, 235);
glVertex2f(0.9f,0.022f);
glVertex2f(0.7f,0.022f);
glVertex2f(0.7f,-0.022f);
glVertex2f(0.9f,-0.022f);


///Middle Road White border2
glBegin(GL_QUADS);
glColor3ub(240, 238, 235);
glVertex2f(0.5f,0.022f);
glVertex2f(0.3f,0.022f);
glVertex2f(0.3f,-0.022f);
glVertex2f(0.5f,-0.022f);


///Middle Road White border3
glBegin(GL_QUADS);
glColor3ub(240, 238, 235);
glVertex2f(0.1f,0.022f);
glVertex2f(-0.1f,0.022f);
glVertex2f(-0.1f,-0.022f);
glVertex2f(0.1f,-0.022f);


///Middle Road White border4
glBegin(GL_QUADS);
glColor3ub(240, 238, 235);
glVertex2f(-0.3f,0.022f);
glVertex2f(-0.5f,0.022f);
glVertex2f(-0.5f,-0.022f);
glVertex2f(-0.3f,-0.022f);


///Middle Road White border5
glBegin(GL_QUADS);
glColor3ub(240, 238, 235);
glVertex2f(-0.7f,0.022f);
glVertex2f(-0.9f,0.022f);
glVertex2f(-0.9f,-0.022f);
glVertex2f(-0.7f,-0.022f);


///Down Road border
glColor3ub(247, 195, 5);
glVertex2f(1.0f,-0.176f);
glVertex2f(-1.0f,-0.176f);
glVertex2f(-1.0f,-0.-0.22f);
glVertex2f(1.0f,-0.22f);


///down Road black border1
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(1.0f,-0.176f);
glVertex2f(0.8f,-0.176f);
glVertex2f(0.8f,-0.-0.22f);
glVertex2f(1.0f,-0.22f);


///down Road black border2
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(0.6f,-0.176f);
glVertex2f(0.4f,-0.176f);
glVertex2f(0.4f,-0.-0.22f);
glVertex2f(0.6f,-0.22f);


///down Road black border3
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(0.2f,-0.176f);
glVertex2f(0.0f,-0.176f);
glVertex2f(0.0f,-0.-0.22f);
glVertex2f(0.2f,-0.22f);


///down Road black border4
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(-0.2f,-0.176f);
glVertex2f(-0.4f,-0.176f);
glVertex2f(-0.4f,-0.-0.22f);
glVertex2f(-0.2f,-0.22f);


///down Road black border5
glBegin(GL_QUADS);
glColor3ub(8, 7, 5);
glVertex2f(-0.6f,-0.176f);
glVertex2f(-0.8f,-0.176f);
glVertex2f(-0.8f,-0.-0.22f);
glVertex2f(-0.6f,-0.22f);






glEnd();


}

///FLYOVER----------------(505)
void Flyover()
{

    ///flyover
   glBegin(GL_QUADS);
glColor3ub(46, 42, 41);
glVertex2f(0.05f,0.4f);
glVertex2f(-1.0f,0.2f);
glVertex2f(-1.0f,-0.1f);
glVertex2f(0.15f,0.35f);


///flyover up yellow border
   glBegin(GL_QUADS);
glColor3ub(247, 195, 5);
glVertex2f(0.05f,0.4f);
glVertex2f(-1.0f,0.25f);
glVertex2f(-1.0f,0.195f);
glVertex2f(0.05f,0.39f);


///flyover middle WHITE border........(1)
   glBegin(GL_QUADS);
glColor3ub(247, 195, 5);
glVertex2f(0.05f,0.4f);
glVertex2f(-1.0f,0.25f);
glVertex2f(-1.0f,0.195f);
glVertex2f(0.05f,0.39f);


///flyover down yellow border
   glBegin(GL_QUADS);
glColor3ub(247, 195, 5);
glVertex2f(0.15f,0.36f);
glVertex2f(-1.0f,-0.05f);
glVertex2f(-1.0f,-0.1f);
glVertex2f(0.15f,0.35f);


///...................................flyover under white speace............(2)
glBegin(GL_QUADS);
glColor3ub(250, 242, 242);
glVertex2f(0.15f,0.35f);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-1.0f,-0.28f);
glVertex2f(0.15f,0.25f);



/// flyover first piller
glBegin(GL_QUADS);
glColor3ub(10, 10, 10);
glVertex2f(-0.81f,-0.023f);
glVertex2f(-0.93f,-0.07f);
glVertex2f(-0.89f,-0.23f);
glVertex2f(-0.82f,-0.2f);

///..............(green background of First piller)
/*glColor3ub(24, 186, 9);
glVertex2f(-0.83f,-0.06f);
glVertex2f(-0.9f,-0.09f);
glVertex2f(-0.88f,-0.19f);
glVertex2f(-0.835f,-0.172f);*/



///....................(flyover Second piller)
glBegin(GL_QUADS);
glColor3ub(10, 10, 10);
glVertex2f(-0.38f,0.145f);
glVertex2f(-0.49f,0.1f);
glVertex2f(-0.46f,-0.035f);
glVertex2f(-0.4f,-0.005f);

glEnd();





///....................(flyover Third piller)
glBegin(GL_QUADS);
glColor3ub(10, 10, 10);
glVertex2f(0.033f,0.305f);
glVertex2f(-0.05f,0.275f);
glVertex2f(-0.022f,0.167f);
glVertex2f(0.019f,0.19f);

glEnd();


///....................(flyover First Divider)
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.81f,0.13f);
glVertex2f(-0.93f,0.10f);
glVertex2f(-0.93f,0.08f);
glVertex2f(-0.81f,0.11f);

glEnd();




///....................(flyover Second Divider)
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.6f,0.19f);
glVertex2f(-0.71f,0.16f);
glVertex2f(-0.71f,0.14f);
glVertex2f(-0.6f,0.17f);




///....................(flyover Third Divider)
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.38f,0.25f);
glVertex2f(-0.49f,0.22f);
glVertex2f(-0.49f,0.20f);
glVertex2f(-0.38f,0.23f);

glEnd();


///....................(flyover Fourth Divider)
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.15f,0.31f);
glVertex2f(-0.25f,0.28f);
glVertex2f(-0.25f,0.26f);
glVertex2f(-0.15f,0.29f);


///....................(flyover fifth Divider)
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.03f,0.36f);
glVertex2f(-0.05f,0.34f);
glVertex2f(-0.05f,0.325f);
glVertex2f(0.03f,0.345f);
glEnd();








 ///........................///flyover down Red realing border
glBegin(GL_LINES);
glColor3ub(255, 11, 3);
glVertex2f(0.15f,0.36f);
glVertex2f(-1.0f,-0.05f);

glBegin(GL_LINES);
glColor3ub(255, 11, 3);
glVertex2f(-1.0f,-0.1f);
glVertex2f(0.15f,0.35f);




///down line
glBegin(GL_LINES);
glColor3ub(255, 11, 3);
glVertex2f(0.05f,0.4f);
glVertex2f(-1.0f,0.25f);

glBegin(GL_LINES);
glColor3ub(255, 11, 3);
glVertex2f(-1.0f,0.195f);
glVertex2f(0.05f,0.39f);





glEnd();


}



///...........................House number(2).............Red House(1)
///Body
///House1----------------(506)
void House1()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(217, 13, 33);
glVertex2f(0.1f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.1f,-0.29f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.33f);
glVertex2f(0.005f,0.33f);
glVertex2f(0.005f,0.23f);
glVertex2f(0.08f,0.23f);


///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();


}





///...........................House number............. House(2)
///Body
///House2----------------(507)
void House2()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(64, 11, 94);
glVertex2f(0.1f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(0.1f,-0.4f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.33f);
glVertex2f(0.005f,0.33f);
glVertex2f(0.005f,0.23f);
glVertex2f(0.08f,0.23f);


///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);



///......................Door
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.032f,-0.28f);
glVertex2f(-0.032f,-0.28f);
glVertex2f(-0.032f,-0.4f);
glVertex2f(0.032f,-0.4);


glEnd();


}

///...............................House(3)  Sky Blue
///House3----------------(508)
void House3()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(2, 75, 102);
glVertex2f(0.1f,0.25f);
glVertex2f(-0.1f,0.25f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.1f,-0.29f);




///......................(1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();


}

///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..........House(4)
///House4----------------(509)
void House4()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(87, 9, 48);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.069f,0.4f);
glVertex2f(-0.069f,-0.2f);
glVertex2f(0.05f,-0.2f);



///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.33f);
glVertex2f(-0.045,0.33f);
glVertex2f(-0.045f,0.23f);
glVertex2f(0.03f,0.23f);



///......................(L2)
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.15f);
glVertex2f(-0.045,0.15f);
glVertex2f(-0.045f,0.05f);
glVertex2f(0.03f,0.05);



///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.045f,-0.03f);
glVertex2f(0.03f,0.-0.03);
glVertex2f(0.03f,-0.12f);
glVertex2f(-0.045,-0.12f);






glEnd();


}


///House5----------------(510)
void House5()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(16, 14, 48);
glVertex2f(0.08f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.08f,-0.29f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.06f,0.33f);
glVertex2f(0.02f,0.33f);
glVertex2f(0.02f,-0.23f);
glVertex2f(0.06f,-0.23f);





///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();



}



///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.......House (6)
///House6----------------(511)
void House6()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(19, 3, 102);
glVertex2f(0.1f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(0.1f,-0.4f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.33f);
glVertex2f(0.005f,0.33f);
glVertex2f(0.005f,0.23f);
glVertex2f(0.08f,0.23f);


///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);



///......................Door
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.032f,-0.28f);
glVertex2f(-0.032f,-0.28f);
glVertex2f(-0.032f,-0.4f);
glVertex2f(0.032f,-0.4);


glEnd();


}


///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>........House(7)
///House7----------------(512)
void House7()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(247, 0, 73);
glVertex2f(0.08f,0.4f);
glVertex2f(-0.1f,0.4f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.08f,-0.29f);

///...............................window1

glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.06f,0.33f);
glVertex2f(0.02f,0.33f);
glVertex2f(0.02f,-0.23f);
glVertex2f(0.06f,-0.23f);





///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.33f);
glVertex2f(-0.005f,0.33f);
glVertex2f(-0.005f,0.23f);
glVertex2f(-0.08f,0.23f);



///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L4)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();



}



///>>>>>>>>>>>>>>>>>>>>>>>>>...................House(8)
///House8----------------(513)
void House8()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(2, 75, 102);
glVertex2f(0.1f,0.25f);
glVertex2f(-0.1f,0.25f);
glVertex2f(-0.1f,-0.29f);
glVertex2f(0.1f,-0.29f);




///......................(1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.18f);
glVertex2f(0.005f,0.18f);
glVertex2f(0.005f,0.08f);
glVertex2f(0.08f,0.08);



///......................(2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,0.03f);
glVertex2f(0.005f,0.03f);
glVertex2f(0.005f,-0.07f);
glVertex2f(0.08f,-0.07);



///......................(3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.08f,-0.12f);
glVertex2f(0.005f,-0.12f);
glVertex2f(0.005f,-0.22f);
glVertex2f(0.08f,-0.22);




///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.18f);
glVertex2f(-0.005f,0.18f);
glVertex2f(-0.005f,0.08f);
glVertex2f(-0.08f,0.08);


///......................(L2)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,0.03f);
glVertex2f(-0.005f,0.03f);
glVertex2f(-0.005f,-0.07f);
glVertex2f(-0.08f,-0.07);




///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.08f,-0.12f);
glVertex2f(-0.005f,-0.12f);
glVertex2f(-0.005f,-0.22f);
glVertex2f(-0.08f,-0.22);





glEnd();


}



///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..........House(4)
///House9----------------(514)
void House9()
{

///Body

 glBegin(GL_QUADS);
glColor3ub(2, 69, 63);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.069f,0.4f);
glVertex2f(-0.069f,-0.2f);
glVertex2f(0.05f,-0.2f);



///......................(L1)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.33f);
glVertex2f(-0.045,0.33f);
glVertex2f(-0.045f,0.23f);
glVertex2f(0.03f,0.23f);



///......................(L2)
glColor3ub(252, 255, 64);
glVertex2f(0.03f,0.15f);
glVertex2f(-0.045,0.15f);
glVertex2f(-0.045f,0.05f);
glVertex2f(0.03f,0.05);



///......................(L3)
glBegin(GL_QUADS);
glColor3ub(252, 255, 64);
glVertex2f(-0.045f,-0.03f);
glVertex2f(0.03f,0.-0.03);
glVertex2f(0.03f,-0.12f);
glVertex2f(-0.045,-0.12f);






glEnd();


}







///...........................Car(1)
///Car----------------(515)
void Car(){
glBegin(GL_QUADS);
        glColor3ub(143, 10, 0);
        glVertex2f(-0.64,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(151, 79, 68);
        glVertex2f(-0.73,-0.74);
        glVertex2f(-0.82,-0.74);
        glVertex2f(-0.85,-0.79);
        glVertex2f(-0.7,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.735,-0.745);
        glVertex2f(-0.816,-0.745);
        glVertex2f(-0.84,-0.785);
        glVertex2f(-0.71,-0.785);
glBegin(GL_QUADS);//yellow
        glColor3ub(241, 96, 91);
        glVertex2f(-0.645,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.647,-0.8);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.88,-0.82);
        glVertex2f(-0.9,-0.82);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
        glEnd();
/*
glBegin(GL_TRIANGLES);
        glColor3ub(R,G,B);
        glVertex2f(-1.04,-0.75);
        glVertex2f(-1.04,-0.89);
        glVertex2f(-0.89,-0.81);
        glEnd();
*/
	glColor3ub(0, 0, 0);
    circle(-0.84,-0.845,0.03);

	glColor3ub(0, 0, 0);
	circle(-0.71,-0.845,0.03);

}


///...............................Bus(1)
///Bus----------------(516)
void Bus(){
glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(-0.35,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.67);
        glVertex2f(-0.35,-0.67);

glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.35,-0.675);
        glVertex2f(-0.38,-0.675);
        glVertex2f(-0.38,-0.775);
        glVertex2f(-0.35,-0.775);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.39,-0.685);
        glVertex2f(-0.89,-0.685);
        glVertex2f(-0.89,-0.765);
        glVertex2f(-0.39,-0.765);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.36,-0.685);
        glVertex2f(-0.77,-0.685);
        glVertex2f(-0.77,-0.765);
        glVertex2f(-0.36,-0.765);

glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.35,-0.84);
        glVertex2f(-0.37,-0.84);
        glVertex2f(-0.37,-0.8);
        glVertex2f(-0.35,-0.8);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.885,-0.84);
        glVertex2f(-0.9,-0.84);
        glVertex2f(-0.9,-0.78);
        glVertex2f(-0.885,-0.78);
glEnd();
/*
glBegin(GL_TRIANGLES);
        glColor3ub(R,G,B);
        glVertex2f(-0.15,-0.78);
        glVertex2f(-0.35,-0.82);
        glVertex2f(-0.15,-0.91);
        glEnd();
*/
	glColor3ub(0, 0, 0);
    circle(-.84,-.845,0.04);

	glColor3ub(0, 0, 0);
    circle(-.75,-.845,0.04);

	glColor3ub(0, 0, 0);
    circle(-.43,-.845,0.04);
}





///>>>>>>>>>>>>>>>>>...Tree(1)

///Tree_Trinagle----------------(517)

void Tree_Trinagle(){
glBegin(GL_QUADS);
glColor3ub(184, 134, 28);
glVertex2f(0.01f,0.0f);
glVertex2f(0.01f,0.4f);
glVertex2f(-0.01f,0.4f);
glVertex2f(-0.01f,0.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(14, 115, 21);
glVertex2f(0.15f,0.3f);
glVertex2f(0.0f,0.55f);
glVertex2f(-0.15f,0.3f);
glEnd();
//2nd
glBegin(GL_TRIANGLES);
glColor3ub(14, 115, 21);
glVertex2f(0.15f,0.41f);
glVertex2f(0.0f,0.75f);
glVertex2f(-0.15f,0.41f);
glEnd();
//3rd
glBegin(GL_TRIANGLES);
glColor3ub(14, 115, 21);
glVertex2f(0.15f,0.51f);
glVertex2f(0.0f,0.85f);
glVertex2f(-0.15f,0.51f);
glEnd();
}



///>>>>>>>>>>>>>>...Circle tree(1)
///Tree circleTreee----------------(518)
void circleTree(){
glBegin(GL_QUADS);
glColor3ub(184, 134, 28);
glVertex2f(0.01f,0.0f);
glVertex2f(0.01f,0.4f);
glVertex2f(-0.01f,0.4f);
glVertex2f(-0.01f,0.0f);
glEnd();
glColor3ub(14, 115, 21);
circle(0.0,0.4,0.05);
glColor3ub(14, 115, 21);
circle(0.02,0.4,0.05);
glColor3ub(14, 115, 21);
circle(-0.02,0.4,0.05);
glColor3ub(14, 115, 21);
circle(0.0,0.46,0.05);
//glEnd();
}

///>>>>>>>>>>>>>>>>>>>>>>>>>>>>.......car rectangle
void CAAr(){

glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(-0.3,0.16);
        glVertex2f(-0.43,0.12);
        glVertex2f(-0.42,0.06);
        glVertex2f(-0.29,0.1);
glEnd();

	glColor3ub(0, 0, 0);
    circle(-0.39,0.07,0.02);

	glColor3ub(0, 0, 0);
	circle(-0.32,0.09,0.02);



}

///>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>..............(Trafic light)
void TraficLight(){

glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(0.1,0.3);
        glVertex2f(-0.05,0.3);
        glVertex2f(-0.05,-0.1);
        glVertex2f(0.1,-0.1);


 glColor3ub(45, 14, 107);
        glVertex2f(0.08,0.2);
        glVertex2f(-0.03,0.2);
        glVertex2f(-0.03,-0.05);
        glVertex2f(0.08,-0.05);





glEnd();




}




















void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    background();

    glTranslatef(0.7f, -0.1f, 0.0f);
    sun();
    glLoadIdentity();

    glTranslatef(0.0f, -0.7f, 0.0f);
    Road();
    glLoadIdentity();


    glTranslatef(0.0f, -0.2f, 0.0f);
    Flyover();
    glLoadIdentity();



     glScalef(0.7f,0.8f,0.0f);
     glTranslatef(0.9f, 0.2f, 0.0f);
     Tree_Trinagle();
     glLoadIdentity();

     ///>>>>>>>>>>>>>>>>>>>>>>>treee(2)
     glScalef(0.5f,0.61f,0.0f);
     glTranslatef(-0.3f, 0.33f, 0.0f);
     Tree_Trinagle();
     glLoadIdentity();


 ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(1)
    glScalef(0.75f,0.5f,0.0f);
    glTranslatef(0.9f, 0.2f, 0.0f);
    circleTree();
    glLoadIdentity();

 ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(2)
    glScalef(0.65f,0.35f,0.0f);
    glTranslatef(0.93f, 0.3f, 0.0f);
    circleTree();
    glLoadIdentity();

     ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(3)
    glScalef(0.75f,0.3f,0.0f);
    glTranslatef(-0.25f, 0.65, 0.0f);
    circleTree();
    glLoadIdentity();

  ///>>>>>>>>>>>>>>>>>>>>>>>circleTree(3)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.75f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();


///>>>>>>>>>>>>>>>>>>>>>>>circleTree(4)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.55f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>>>circleTree(5)
     glScalef(0.75f,0.45f,0.0f);
    glTranslatef(-0.35f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();






///>>>>>>>>>>>>>>>>>>>>>>>circleTree(6)
    glScalef(0.75f,0.45f,0.0f);
    glTranslatef(1.0f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>>>circleTree(7)
     glScalef(0.75f,0.45f,0.0f);
    glTranslatef(0.8f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();


///>>>>>>>>>>>>>>>>>>>>>>>circleTree(8)

  glScalef(0.75f,0.45f,0.0f);
    glTranslatef(0.6f, -1.0, 0.0f);
    circleTree();
    glLoadIdentity();









///>>>>>>>>>>>>>>>>>>>>>house


    glScalef(1.0f,0.8f,0.0f);
    glTranslatef(0.28f, 0.37f, 0.0f);
    House1();
    glLoadIdentity();



    ///>>>>>>>>>>>>>>>>>>>>>house(2)

    glScalef(0.9f,0.8f,0.0f);
    glTranslatef(0.15f, 0.3f, 0.0f);
    House2();
    glLoadIdentity();





///>>>>>>>>>>>>>>>>>>>>>house(3)
    glScalef(0.9f,0.7f,0.0f);
    glTranslatef(0.53f, 0.37f, 0.0f);
    House3();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>house(4)
    glScalef(0.95f,0.8f,0.0f);
    glTranslatef(1.0f, 0.37f, 0.0f);
    House4();
    glLoadIdentity();

///>>>>>>>>>>>>>>>>>>>>>house(5)
    glScalef(0.85f,0.8f,0.0f);
    glTranslatef(0.95f, 0.37f, 0.0f);
    House5();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(6)
    glScalef(0.81f,0.45f,0.0f);
    glTranslatef(-1.0f, 0.84f, 0.0f);
    House6();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(7)
    glScalef(0.65f,0.7f,0.0f);
    glTranslatef(-0.99f, 0.57f, 0.0f);
    House7();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(8)
    glScalef(0.65f,0.55f,0.0f);
    glTranslatef(-0.78f, 0.58f, 0.0f);
    House8();
    glLoadIdentity();


    ///>>>>>>>>>>>>>>>>>>>>>house(9)
    glScalef(0.75f,0.65f,0.0f);
    glTranslatef(-0.49f, 0.5f, 0.0f);
    House9();
    glLoadIdentity();

    glPushMatrix();
    glScalef(0.9f,0.9f,0.0f);
    glTranslatef(carPosition+0.8f, -0.08f, 0.0f);
    Car();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glScalef(0.7f,0.6f,0.0f);
    glTranslatef(busPosition+0.9f, -0.23f, 0.0f);
    Bus();
    glPopMatrix();
    glLoadIdentity();



///>>>>>>>>>>>>>>>>>>>>>>>>>..............Clouds
    glScalef(0.9f,1.0f,0.0f);
    glTranslatef(0.0f, 0.91f, 0.0f);
    makeCloud();
    glLoadIdentity();



    glScalef(0.9f,1.0f,0.0f);
    glTranslatef(-0.75f, 0.91f, 0.0f);
    makeCloud();
    glLoadIdentity();



    glTranslatef(-0.5f, -0.2f, 0.0f);

    CAAr();

    glLoadIdentity();




    TraficLight();





    glFlush();

}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
//	 glutTimerFunc(100, Update, 0);
    glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}


