#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.14

using namespace std;

void BusTire()
{
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0); //249,215,28 //255,140,0
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.80;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();

}

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
}

void drawSky(void)
{
    glBegin(GL_QUADS);
    glColor3ub(102, 190, 250); //(166, 189, 219); // Maximum Green
    glVertex2i(0, 800);
    glVertex2i(1050, 800);
    glVertex2i(1050, 1000);
    glVertex2i(0, 1000);
    glEnd();
}

void drawSkyBottom(void)
{
    glBegin(GL_QUADS);
    glColor3ub(30, 86, 49); // Maximum Green
    glVertex2i(0, 800);
    glVertex2i(1050, 750);
    glVertex2i(1050, 900);
    glVertex2i(900, 860);
    glVertex2i(860, 820);
    glVertex2i(800, 870);
    glVertex2i(700, 870);
    glVertex2i(600, 820);
    glVertex2i(0, 840);
    glEnd();
}

void drawRiver(void)
{
    glBegin(GL_QUADS);
    glColor3ub( 90, 130, 255);
    glVertex2i(0, 500);
    glVertex2i(1050, 500);
    glVertex2i(1050, 820);
    glVertex2i(0, 820);
    glEnd();
}

void drawBoatOne(void)
{
    // Part one
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2i(50, 720);
    glVertex2i(115, 720);
    glVertex2i(130, 740);
    glVertex2i(40, 740);
    glEnd();

    // Part two
    glBegin(GL_POLYGON);
    glColor3ub(255,0, 0);
    glVertex2i(55, 740);
    glVertex2i(100, 740);
    glVertex2i(80, 760);
    glVertex2i(60, 760);
    glEnd();

    // Part three
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(50, 740);
    glVertex2i(55, 740);
    glVertex2i(55, 760);
    glVertex2i(50, 760);
    glEnd();
}

void drawBoatTwo(void)
{
    // Part one
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2i(865, 782);
    glVertex2i(924, 782);
    glVertex2i(930, 795);
    glVertex2i(840, 795);
    glEnd();

    // Part two
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2i(880, 795);
    glVertex2i(925, 795);
    glVertex2i(923, 810);
    glVertex2i(900, 810);
    glEnd();


}
void drawBoatThree(void)
{
    // Part one
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2i(820, 770);
    glVertex2i(920, 770);
    glVertex2i(930, 790);
    glVertex2i(810, 790);
    glEnd();

    // Part two
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2i(840, 790);
    glVertex2i(920, 790);
    glVertex2i(900, 805);
    glVertex2i(860, 805);
    glEnd();

    // Part three
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(920, 790);
    glVertex2i(925, 790);
    glVertex2i(925, 820);
    glVertex2i(920, 820);
    glEnd();
}

void drawGrass(void)
{
    glBegin(GL_QUADS);
    glColor3ub(90, 154, 42); // Maximum Green
    glVertex2i(0, 220);
    glVertex2i(1050, 220);
    glVertex2i(1050, 600);
    glVertex2i(0, 600);
    glEnd();
}

void drawLandShades(void)
{
    //land shade 1
    glBegin(GL_POLYGON);
    glColor3ub(45, 139, 97); // Maximum Green
    glVertex2i(1050, 220);
    glVertex2i(1050, 320);
    glVertex2i(690, 220);
    glEnd();

    // land shade2
    glBegin(GL_POLYGON);
    glColor3ub(46, 224, 87); // Maximum Green
    glVertex2i(1050, 330);
    glVertex2i(0, 300);
    glVertex2i(0, 650);
    glVertex2i(1050, 380);
    glEnd();

    //land shade 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 204, 102); // Maximum Green
    glVertex2i(1050, 620);
    glVertex2i(1050, 500);
    glVertex2i(500, 490);
    glVertex2i(500, 400);
    glEnd();
}

void drawRoads(void)
{
    //Road 1
    glBegin(GL_QUADS);
    glColor3ub(96, 106, 116); // Red
    glVertex2i(0, 10);
    glVertex2i(1050, 10);
    glVertex2i(1050, 200);
    glVertex2i(0, 200);
    glEnd();

    //Road 2
    glBegin(GL_POLYGON);
    glColor3ub(96, 106, 116);
    glVertex2i(520, 200);
    glVertex2i(690, 200);
    glVertex2i(480, 600);
    glVertex2i(370, 600);
    glEnd();

    //Road 3
    glBegin(GL_POLYGON);
    glColor3ub(96, 106, 116);
    glVertex2i(0, 600);
    glVertex2i(500, 530);
    glVertex2i(480, 605);
    glVertex2i(0, 630);
    glEnd();
}

void drawRoadSigns(void)
{
    //sign 1
    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 255); // Red
    glVertex2i(50, 100);
    glVertex2i(200, 100);
    glVertex2i(200, 110);
    glVertex2i(50, 110);
    glEnd();

    //sign 2
    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 255); // white
    glVertex2i(250, 100);
    glVertex2i(400, 100);
    glVertex2i(400, 110);
    glVertex2i(250, 110);
    glEnd();

    //sign 3
    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 255); // white
    glVertex2i(450, 100);
    glVertex2i(600, 100);
    glVertex2i(600, 110);
    glVertex2i(450, 110);
    glEnd();

    //sign 4
    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 255); // white
    glVertex2i(650, 100);
    glVertex2i(800, 100);
    glVertex2i(800, 110);
    glVertex2i(650, 110);
    glEnd();

    //sign 5
    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(255, 255, 255); // white
    glVertex2i(850, 100);
    glVertex2i(990, 100);
    glVertex2i(990, 110);
    glVertex2i(850, 110);
    glEnd();
}

void drawCarOne(void)
{
    glBegin(GL_QUADS);
    glColor3ub(55, 2, 0);
    glVertex2i(795, 50);
    glVertex2i(885, 50);
    glVertex2i(885, 80);
    glVertex2i(800, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2i(800, 80);
    glVertex2i(875, 80);
    glVertex2i(870, 110);
    glVertex2i(800+10, 110);

    glEnd();

    //wheel 1
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 815;
        float y = r * sin(A) + 50;
        glVertex2f(x, y);
    }

    glEnd();

    //wheel 2
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 865;
        float y = r * sin(A) + 50;
        glVertex2f(x, y);
    }

    glEnd();
}
void drawCarTwo(void)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2i(95, 50);
    glVertex2i(185, 50);
    glVertex2i(180, 80);
    glVertex2i(100, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2i(100, 80);
    glVertex2i(170, 80);
    glVertex2i(150, 110);
    glVertex2i(110, 110);

    glEnd();
    // wheel 1
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 115;
        float y = r * sin(A) + 50;
        glVertex2f(x, y);
    }

    glEnd();
    //wheel 2
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 165;
        float y = r * sin(A) + 50;
        glVertex2f(x, y);
    }

    glEnd();
}

void drawCarThree(void)
{
    glBegin(GL_QUADS);
    glColor3ub(200, 255, 200);
    glVertex2i(475, 150);
    glVertex2i(600, 150);
    glVertex2i(600, 180);
    glVertex2i(490, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 250, 255);
    glVertex2i(500, 180);
    glVertex2i(580, 180);
    glVertex2i(570, 210);
    glVertex2i(510, 210);

    glEnd();

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 505;
        float y = r * sin(A) + 150;
        glVertex2f(x, y);
    }

    glEnd();
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 570;
        float y = r * sin(A) + 150;
        glVertex2f(x, y);
    }

    glEnd();
}
void drawCarFour(void)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2i(475, 150);
    glVertex2i(600, 150);
    glVertex2i(590, 180);
    glVertex2i(490, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2i(500, 180);
    glVertex2i(580, 180);
    glVertex2i(570, 210);
    glVertex2i(510, 210);
    //glVertex2i(720,100);
    glEnd();

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 505;
        float y = r * sin(A) + 150;
        glVertex2f(x, y);
    }

    glEnd();
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(1.0, 0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 570;
        float y = r * sin(A) + 150;
        glVertex2f(x, y);
    }

    glEnd();
}

void drawHomes(void)
{

    //building 1
    glBegin(GL_POLYGON);
    glColor3ub(223, 225, 215); // White
    glVertex2i(600, 530);
    glVertex2i(700, 525);
    glVertex2i(700, 840);
    glVertex2i(600, 840);

    glEnd();

    // window
    glBegin(GL_POLYGON);
    glColor3ub(197, 203, 158);
    glVertex2i(610, 530);
    glVertex2i(700, 520);
    glVertex2i(700, 600);
    glVertex2i(610, 600);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(610, 615);
    glVertex2i(650, 615);
    glVertex2i(650, 660);
    glVertex2i(610, 660);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(660, 615);
    glVertex2i(705, 615);
    glVertex2i(705, 660);
    glVertex2i(660, 660);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(610, 675);
    glVertex2i(650, 675);
    glVertex2i(650, 720);
    glVertex2i(610, 720);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(660, 675);
    glVertex2i(705, 675);
    glVertex2i(705, 720);
    glVertex2i(660, 720);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(610, 735);
    glVertex2i(650, 735);
    glVertex2i(650, 780);
    glVertex2i(610, 780);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(660, 735);
    glVertex2i(695, 735);
    glVertex2i(695, 780);
    glVertex2i(660, 780);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(610, 790);
    glVertex2i(650, 790);
    glVertex2i(650, 830);
    glVertex2i(610, 830);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(660, 790);
    glVertex2i(695, 790);
    glVertex2i(695, 830);
    glVertex2i(660, 830);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(168, 168, 168); // White
    glVertex2i(700, 525);
    glVertex2i(710, 527);
    glVertex2i(710, 837);
    glVertex2i(700, 840);

    glEnd();

        //building 2
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255); // White
    glVertex2i(730, 523);
    glVertex2i(830, 525);
    glVertex2i(830, 795);
    glVertex2i(730, 795);

    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(121, 121, 201); // White
    glVertex2i(740, 523);
    glVertex2i(820, 525);
    glVertex2i(820, 580);
    glVertex2i(740, 580);

    glEnd();

            glBegin(GL_POLYGON);

    glVertex2i(740, 595);
    glVertex2i(780, 595);
    glVertex2i(780, 645);
    glVertex2i(740, 645);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(790, 595);
    glVertex2i(825, 595);
    glVertex2i(825, 645);
    glVertex2i(790, 645);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(740, 660);
    glVertex2i(780, 660);
    glVertex2i(780, 710);
    glVertex2i(740, 710);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(790, 660);
    glVertex2i(825, 660);
    glVertex2i(825, 710);
    glVertex2i(790, 710);

    glEnd();

                    glBegin(GL_POLYGON);

    glVertex2i(740, 725);
    glVertex2i(780, 725);
    glVertex2i(780, 775);
    glVertex2i(740, 775);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(790, 725);
    glVertex2i(825, 725);
    glVertex2i(825, 775);
    glVertex2i(790, 775);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(88, 88, 233); // White
    glVertex2i(830, 523);
    glVertex2i(835, 525);
    glVertex2i(835, 793);
    glVertex2i(830, 795);

    glEnd();

    //building 3
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255); // White
    glVertex2i(670, 503);
    glVertex2i(750, 505);
    glVertex2i(750, 725);
    glVertex2i(670, 725);

    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(29, 186, 198); // White
    glVertex2i(680, 503);
    glVertex2i(740, 505);
    glVertex2i(740, 555);
    glVertex2i(680, 555);

    glEnd();

            glBegin(GL_POLYGON);

    glVertex2i(675, 565);
    glVertex2i(707, 565);
    glVertex2i(707, 610);
    glVertex2i(675, 610);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(713, 565);
    glVertex2i(745, 565);
    glVertex2i(745, 610);
    glVertex2i(713, 610);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(675, 625);
    glVertex2i(707, 625);
    glVertex2i(707, 670);
    glVertex2i(675, 670);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(713, 625);
    glVertex2i(745, 625);
    glVertex2i(745, 670);
    glVertex2i(713, 670);

    glEnd();

                    glBegin(GL_POLYGON);

    glVertex2i(675, 680);
    glVertex2i(707, 680);
    glVertex2i(707, 720);
    glVertex2i(675, 720);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(713, 680);
    glVertex2i(745, 680);
    glVertex2i(745, 720);
    glVertex2i(713, 720);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(152, 196, 199); // White
    glVertex2i(750, 503);
    glVertex2i(755, 505);
    glVertex2i(755, 723);
    glVertex2i(750, 725);

    glEnd();

        //tree 4( PART 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(885, 510);
    glVertex2i(895, 510);
    glVertex2i(895, 560);
    glVertex2i(885, 560);
    glEnd();

    // tree 4 (leaf 1)
    glBegin(GL_TRIANGLES);
    glColor3ub(76, 153, 0); // Maximum Green
    glVertex2i(865, 560);
    glVertex2i(915, 560);
    glVertex2i(885, 640);
    glEnd();
    // tree 4(leaf 2)
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0); // Maximum green
    glVertex2i(865, 580);
    glVertex2i(915, 580);
    glVertex2i(890, 660);
    glEnd();

     //building 4
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255); // White
    glVertex2i(900, 453);
    glVertex2i(1000, 455);
    glVertex2i(1000, 725);
    glVertex2i(900, 725);

    glEnd();


        glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(910, 453);
    glVertex2i(990, 455);
    glVertex2i(990, 505);
    glVertex2i(910, 505);

    glEnd();

            glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(905, 520);
    glVertex2i(945, 520);
    glVertex2i(945, 575);
    glVertex2i(905, 575);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(955, 520);
    glVertex2i(995, 520);
    glVertex2i(995, 575);
    glVertex2i(955, 575);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(905, 590);
    glVertex2i(945, 590);
    glVertex2i(945, 645);
    glVertex2i(905, 645);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(955, 590);
    glVertex2i(995, 590);
    glVertex2i(995, 645);
    glVertex2i(955, 645);

    glEnd();

                    glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(905, 660);
    glVertex2i(945, 660);
    glVertex2i(945, 715);
    glVertex2i(905, 715);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 155, 255); // White
    glVertex2i(955, 660);
    glVertex2i(995, 660);
    glVertex2i(995, 715);
    glVertex2i(955, 715);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(29, 186, 198); // White
    glVertex2i(1000, 453);
    glVertex2i(1010, 455);
    glVertex2i(1010, 723);
    glVertex2i(1000, 725);

    glEnd();

    //left


        //building 5
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255); // White
    glVertex2i(80, 373);
    glVertex2i(180, 375);
    glVertex2i(180, 645);
    glVertex2i(80, 645);

    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(90, 373);
    glVertex2i(170, 375);
    glVertex2i(170, 425);
    glVertex2i(90, 425);

    glEnd();

            glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(85, 440);
    glVertex2i(125, 440);
    glVertex2i(125, 495);
    glVertex2i(85, 495);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(135, 440);
    glVertex2i(175, 440);
    glVertex2i(175, 495);
    glVertex2i(135, 495);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(85, 510);
    glVertex2i(125, 510);
    glVertex2i(125, 565);
    glVertex2i(85, 565);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(135, 510);
    glVertex2i(175, 510);
    glVertex2i(175, 565);
    glVertex2i(135, 565);

    glEnd();


                    glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(85, 580);
    glVertex2i(125, 580);
    glVertex2i(125, 635);
    glVertex2i(85, 635);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 135, 255); // White
    glVertex2i(135, 580);
    glVertex2i(175, 580);
    glVertex2i(175, 635);
    glVertex2i(135, 635);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(70, 89, 253); // White
    glVertex2i(180, 373);
    glVertex2i(185, 375);
    glVertex2i(185, 643);
    glVertex2i(180, 645);

    glEnd();

    //building 6
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255); // White
    glVertex2i(20, 353);
    glVertex2i(100, 355);
    glVertex2i(100, 575);
    glVertex2i(20, 575);

    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(0, 55, 255); // White
    glVertex2i(30, 353);
    glVertex2i(90, 355);
    glVertex2i(90, 400);
    glVertex2i(30, 400);

    glEnd();


            glBegin(GL_POLYGON);
    glColor3ub(0, 55, 255); // White
    glVertex2i(25, 410);
    glVertex2i(55, 410);
    glVertex2i(55, 455);
    glVertex2i(25, 455);

    glEnd();


            glBegin(GL_POLYGON);
    glColor3ub(0, 55, 255); // White
    glVertex2i(65, 410);
    glVertex2i(95, 410);
    glVertex2i(95, 455);
    glVertex2i(65, 455);

    glEnd();

                glBegin(GL_POLYGON);
    glColor3ub(0, 55, 255); // White
    glVertex2i(65, 465);
    glVertex2i(95, 465);
    glVertex2i(95, 510);
    glVertex2i(65, 510);

    glEnd();

                    glBegin(GL_POLYGON);
    glColor3ub(0, 55, 255); // White
    glVertex2i(65, 520);
    glVertex2i(95, 520);
    glVertex2i(95, 565);
    glVertex2i(65, 565);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(104, 119, 255); // White
    glVertex2i(100, 353);
    glVertex2i(105, 355);
    glVertex2i(105, 573);
    glVertex2i(100, 575);

    glEnd();

      //building 7
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255); // White
    glVertex2i(-50, 350);
    glVertex2i(50, 345);
    glVertex2i(50, 670);
    glVertex2i(-50, 665);

    glEnd();


        // window
    glBegin(GL_POLYGON);
    glColor3ub(221, 222, 229);
    glVertex2i(-40, 350);
    glVertex2i(40, 345);
    glVertex2i(40, 420);
    glVertex2i(-40, 420);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(-40, 435);
    glVertex2i(0, 435);
    glVertex2i(0, 480);
    glVertex2i(-40, 480);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(10, 435);
    glVertex2i(45, 435);
    glVertex2i(45, 480);
    glVertex2i(10, 480);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(-40, 495);
    glVertex2i( 0, 495);
    glVertex2i( 0, 540);
    glVertex2i(-40, 540);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(10, 495);
    glVertex2i(45, 495);
    glVertex2i(45, 540);
    glVertex2i(10, 540);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(-40, 555);
    glVertex2i(0, 555);
    glVertex2i( 0, 600);
    glVertex2i(-40, 600);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(10, 555);
    glVertex2i(45, 555);
    glVertex2i(45, 600);
    glVertex2i(10, 600);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(-40, 610);
    glVertex2i( 0, 610);
    glVertex2i( 0, 650);
    glVertex2i(-40, 650);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2i(10, 610);
    glVertex2i(45, 610);
    glVertex2i(45, 650);
    glVertex2i(10, 650);

    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(229, 229, 169); // White
    glVertex2i(50, 345);
    glVertex2i(60, 347);
    glVertex2i(60, 667);
    glVertex2i(50, 670);

    glEnd();

    // tree 3(part 1) ...........................****************
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0);
    glVertex2i(260, 440);
    glVertex2i(280, 440);
    glVertex2i(280, 330);
    glVertex2i(260, 330);
    glEnd();

    // tree 3 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25);
    glVertex2i(200, 440);
    glVertex2i(340, 440);
    glVertex2i(270, 550);
    glEnd();

    //  tree 3 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2i(200, 480);
    glVertex2i(340, 480);
    glVertex2i(270, 580);
    glEnd();

    // tree 3 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25);
    glVertex2i(200, 505);
    glVertex2i(340, 505);
    glVertex2i(270, 620);
    glEnd();


    //building 8
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 198); // White
    glVertex2i(300, 305);
    glVertex2i(450, 300);
    glVertex2i(450, 700);
    glVertex2i(300, 700);

    glEnd();

//window
        glBegin(GL_POLYGON);
    glColor3ub(255, 255, 55 ); // White
    glVertex2i(310, 305);
    glVertex2i(440, 300);
    glVertex2i(440, 380);
    glVertex2i(310, 380);

    glEnd();

            glBegin(GL_POLYGON);

    glVertex2i(310, 395);
    glVertex2i(370, 395);
    glVertex2i(370, 450);
    glVertex2i(310, 450);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(380, 395);
    glVertex2i(440, 395);
    glVertex2i(440, 450);
    glVertex2i(380, 450);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(310, 465);
    glVertex2i(370, 465);
    glVertex2i(370, 520);
    glVertex2i(310, 520);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(380, 465);
    glVertex2i(440, 465);
    glVertex2i(440, 520);
    glVertex2i(380, 520);

    glEnd();

                    glBegin(GL_POLYGON);

    glVertex2i(310, 535);
    glVertex2i(370, 535);
    glVertex2i(370, 590);
    glVertex2i(310, 590);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(380, 535);
    glVertex2i(440, 535);
    glVertex2i(440, 590);
    glVertex2i(380, 590);

    glEnd();

                        glBegin(GL_POLYGON);

    glVertex2i(310, 605);
    glVertex2i(370, 605);
    glVertex2i(370, 670);
    glVertex2i(310, 670);

    glEnd();

                glBegin(GL_POLYGON);

    glVertex2i(380, 605);
    glVertex2i(440, 605);
    glVertex2i(440, 670);
    glVertex2i(380, 670);

    glEnd();





    glBegin(GL_POLYGON);
    glColor3ub(202, 203, 145); // White
    glVertex2i(450, 300);
    glVertex2i(460, 302);
    glVertex2i(460, 697);
    glVertex2i(450, 700);

    glEnd();


}

void drawTrees(void)
{

         //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(910, 875);
    glVertex2i(914, 875);
    glVertex2i(914, 890);
    glVertex2i(910, 890);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(900, 890);
    glVertex2i(925, 890);
    glVertex2i(912.5, 900);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(900, 895);
    glVertex2i(925, 895);
    glVertex2i(912.5, 905);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(900, 900);
    glVertex2i(925, 900);
    glVertex2i(912.5, 915);
    glEnd();


     //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(920, 880);
    glVertex2i(924, 880);
    glVertex2i(924, 895);
    glVertex2i(920, 895);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(910, 895);
    glVertex2i(935, 895);
    glVertex2i(922.5, 905);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(910, 900);
    glVertex2i(935, 900);
    glVertex2i(922.5, 910);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(910, 905);
    glVertex2i(935, 905);
    glVertex2i(922.5, 920);
    glEnd();

      //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(930, 880);
    glVertex2i(934, 880);
    glVertex2i(934, 895);
    glVertex2i(930, 895);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(920, 895);
    glVertex2i(945, 895);
    glVertex2i(932.5, 905);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(920, 900);
    glVertex2i(945, 900);
    glVertex2i(932.5, 910);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(920, 905);
    glVertex2i(945, 905);
    glVertex2i(932.5, 920);
    glEnd();





      //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(510, 825);
    glVertex2i(514, 825);
    glVertex2i(514, 840);
    glVertex2i(510, 840);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(500, 840);
    glVertex2i(525, 840);
    glVertex2i(512.5, 850);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(500, 845);
    glVertex2i(525, 845);
    glVertex2i(512.5, 855);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(500, 850);
    glVertex2i(525, 850);
    glVertex2i(512.5, 865);
    glEnd();


     //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(520, 830);
    glVertex2i(524, 830);
    glVertex2i(524, 845);
    glVertex2i(520, 845);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(510, 845);
    glVertex2i(535, 845);
    glVertex2i(522.5, 855);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(510, 850);
    glVertex2i(535, 850);
    glVertex2i(522.5, 860);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(510, 855);
    glVertex2i(535, 855);
    glVertex2i(522.5, 870);
    glEnd();

      //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(530, 830);
    glVertex2i(534, 830);
    glVertex2i(534, 845);
    glVertex2i(530, 845);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(520, 845);
    glVertex2i(5545, 845);
    glVertex2i(532.5, 855);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(520, 850);
    glVertex2i(545, 850);
    glVertex2i(532.5, 860);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(520, 855);
    glVertex2i(545, 855);
    glVertex2i(532.5, 870);
    glEnd();







          //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(310, 825);
    glVertex2i(314, 825);
    glVertex2i(314, 840);
    glVertex2i(310, 840);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(300, 840);
    glVertex2i(325, 840);
    glVertex2i(312.5, 850);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(300, 845);
    glVertex2i(325, 845);
    glVertex2i(312.5, 855);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(300, 850);
    glVertex2i(325, 850);
    glVertex2i(312.5, 865);
    glEnd();


     //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(320, 830);
    glVertex2i(324, 830);
    glVertex2i(324, 845);
    glVertex2i(320, 845);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(310, 845);
    glVertex2i(335, 845);
    glVertex2i(322.5, 855);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(310, 850);
    glVertex2i(335, 850);
    glVertex2i(322.5, 860);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(310, 855);
    glVertex2i(335, 855);
    glVertex2i(322.5, 870);
    glEnd();

      //tree small 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(330, 830);
    glVertex2i(334, 830);
    glVertex2i(334, 845);
    glVertex2i(330, 845);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(320, 845);
    glVertex2i(345, 845);
    glVertex2i(332.5, 855);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(320, 850);
    glVertex2i(345, 850);
    glVertex2i(332.5, 860);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(320, 855);
    glVertex2i(345, 855);
    glVertex2i(332.5, 870);
    glEnd();

    //??




    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(520, 865);
    glVertex2i(545, 865);
    glVertex2i(532.5, 875);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(520, 870);
    glVertex2i(545, 870);
    glVertex2i(532.5, 880);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(520, 875);
    glVertex2i(545, 875);
    glVertex2i(532.5, 890);
    glEnd();



        //tree 1(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(430, 230);
    glVertex2i(440, 230);
    glVertex2i(440, 310);
    glVertex2i(430, 310);
    glEnd();

    //tree1 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(395, 310);
    glVertex2i(475, 310);
    glVertex2i(435, 360);
    glEnd();

    //tree1 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(395, 340);
    glVertex2i(475, 340);
    glVertex2i(435, 390);
    glEnd();

    //tree1 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(400, 370);
    glVertex2i(465, 370);
    glVertex2i(435, 430);
    glEnd();


    //tree 2(part 1)
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 0); // Maximum Green
    glVertex2i(545, 500);
    glVertex2i(555, 500);
    glVertex2i(555, 580);
    glVertex2i(545, 580);
    glEnd();

    //tree2 (leaf 1)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(510, 580);
    glVertex2i(590, 580);
    glVertex2i(550, 630);
    glEnd();

    //tree2 (leaf 2)
    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0); // Maximum Green
    glVertex2i(510, 610);
    glVertex2i(590, 610);
    glVertex2i(550, 660);
    glEnd();

    //tree2 (leaf 3)
    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 25); // Maximum Green
    glVertex2i(515, 640);
    glVertex2i(580, 640);
    glVertex2i(550, 720);
    glEnd();





}

void drawCloudOne(void)
{
    //cloud 1

                      glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=30.85*sin(i)+350;
			float y=30.85*cos(i)+920;
			glVertex2f(x,y);
		}
	glEnd();

                      glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=30.85*sin(i)+320;
			float y=30.85*cos(i)+900;
			glVertex2f(x,y);
		}
	glEnd();


                        glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=30.85*sin(i)+380;
			float y=30.85*cos(i)+880;
			glVertex2f(x,y);
		}
	glEnd();


                      glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=30.85*sin(i)+340;
			float y=30.85*cos(i)+890;
			glVertex2f(x,y);
		}
	glEnd();
}

void drawCloudTwo(void)
{
    //cloud 2
                     glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=38.85*sin(i)+70;
			float y=38.85*cos(i)+900;
			glVertex2f(x,y);
		}
	glEnd();

                     glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=38.85*sin(i)+70;
			float y=38.85*cos(i)+950;
			glVertex2f(x,y);
		}
	glEnd();




                 glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=38.85*sin(i)+30;
			float y=38.85*cos(i)+920;
			glVertex2f(x,y);
		}
	glEnd();



             glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,240,240);
		for(int i=0;i<=200;i+=1)
		{
			float x=38.85*sin(i)+100;
			float y=38.85*cos(i)+910;
			glVertex2f(x,y);
		}
	glEnd();
}

void drawCloudThree(void)
{
    //cloud 3

        glBegin(GL_TRIANGLE_FAN);
		glColor3ub(220,250,250);
		for(int i=0;i<=200;i+=1)
		{
			float x=35.85*sin(i)+790;
			float y=35.85*cos(i)+950;
			glVertex2f(x,y);
		}
	glEnd();

        glBegin(GL_TRIANGLE_FAN);
		glColor3ub(220,250,250);
		for(int i=0;i<=200;i+=1)
		{
			float x=28.85*sin(i)+760;
			float y=28.85*cos(i)+960;
			glVertex2f(x,y);
		}
	glEnd();


         glBegin(GL_TRIANGLE_FAN);
		glColor3ub(220,250,250);
		for(int i=0;i<=200;i+=1)
		{
			float x=27.85*sin(i)+835;
			float y=27.85*cos(i)+970;
			glVertex2f(x,y);
		}
	glEnd();


         glBegin(GL_TRIANGLE_FAN);
		glColor3ub(220,250,250);
		for(int i=0;i<=200;i+=1)
		{
			float x=27.85*sin(i)+835;
			float y=27.85*cos(i)+940;
			glVertex2f(x,y);
		}
	glEnd();

         glBegin(GL_TRIANGLE_FAN);
		glColor3ub(220,250,250);
		for(int i=0;i<=200;i+=1)
		{
			float x=25.85*sin(i)+865;
			float y=25.85*cos(i)+944;
			glVertex2f(x,y);
		}
	glEnd();


}

void drawSun(void)
{

    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(240,250,0);
		for(int i=0;i<=200;i+=1)
		{
			float x=30.85*sin(i)+250;
			float y=30.85*cos(i)+860;
			glVertex2f(x,y);
		}
	glEnd();

}

void drawSignals(void)
{
    //Signal (part 1)
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(98, 420);
    glVertex2i(87, 420);
    glVertex2i(87, 200);
    glVertex2i(98, 200);
    glEnd();

    //Signal (part 2)
    glBegin(GL_QUADS);
    glColor3ub(172, 172, 172);
    glVertex2i(105, 420);
    glVertex2i(80, 420);
    glVertex2i(80, 340);
    glVertex2i(105, 340);
    glEnd();

    //SIGNAL ( RED light)
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 92;
        float y = r * sin(A) + 405;
        glVertex2f(x, y);
    }
    glEnd();

    //SIGNAL (yellow light)
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 92;
        float y = r * sin(A) + 380;
        glVertex2f(x, y);
    }
    glEnd();

    //SIGNAL (Green light)
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 153, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.85;
        float x = r * cos(A) + 92;
        float y = r * sin(A) + 355;
        glVertex2f(x, y);
    }
    glEnd();
}

void drawBench(void)
{
    // bench (part 1)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(780, 425);
    glVertex2i(775, 425);
    glVertex2i(775, 388);
    glVertex2i(780, 388);
    glEnd();

    // bench (part 2)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(700, 425);
    glVertex2i(705, 425);
    glVertex2i(705, 388);
    glVertex2i(700, 388);
    glEnd();

    // bench (part 3)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(800, 420);
    glVertex2i(680, 420);
    glVertex2i(680, 413);
    glVertex2i(800, 413);
    glEnd();

    // bench (part 4)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(800, 410);
    glVertex2i(680, 410);
    glVertex2i(680, 403);
    glVertex2i(800, 403);
    glEnd();

    // bench (part 5)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(800, 400);
    glVertex2i(680, 400);
    glVertex2i(680, 393);
    glVertex2i(800, 393);
    glEnd();

    // bench (part 6)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(800, 388);
    glVertex2i(680, 388);
    glVertex2i(670, 368);
    glVertex2i(810, 368);
    glVertex2i(670, 368);
    glVertex2i(810, 368);
    glVertex2i(810, 360);
    glVertex2i(670, 360);
    glEnd();

    // bench (part 7)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(680, 360);
    glVertex2i(685, 360);
    glVertex2i(687, 330);
    glVertex2i(680, 330);
    glEnd();

    // bench (part 8)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(690, 360);
    glVertex2i(695, 360);
    glVertex2i(697, 340);
    glVertex2i(690, 340);
    glEnd();

    // bench (part 9)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(800, 360);
    glVertex2i(795, 360);
    glVertex2i(795, 330);
    glVertex2i(802, 330);
    glEnd();

    // bench (part 10)
    glBegin(GL_QUADS);
    glColor3ub(150, 70, 0);
    glVertex2i(790, 360);
    glVertex2i(785, 360);
    glVertex2i(785, 340);
    glVertex2i(792, 340);
    glEnd();
}



void drawPlane(void)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2i(40, 965);
    glVertex2i(90, 970);
    glVertex2i(90, 955);
    glVertex2i(20, 955);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2i(90, 970);
    glVertex2i(90, 955);
    glVertex2i(100, 960);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 200);
    glVertex2i(45, 959);
    glVertex2i(60, 959);
    glVertex2i(15, 935);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 200);
    glVertex2i(70, 963);
    glVertex2i(55, 963);
    glVertex2i(45, 990);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 200);
    glVertex2i(20, 957);
    glVertex2i(30, 959);
    glVertex2i(25, 980);
    glVertex2i(20, 980);
    glEnd();
}

void drawZebracrossing(void)
{
    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(255, 255, 255);
    glVertex2i(40, 10);
    glVertex2i(100, 10);
    glVertex2i(85, 200);
    glVertex2i(55, 200);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 0);
    glVertex2i(45, 30);
    glVertex2i(95, 15);
    glVertex2i(93, 35);
    glVertex2i(47, 50);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 0);
    glVertex2i(47, 65);
    glVertex2i(93, 50);
    glVertex2i(91, 70);
    glVertex2i(49, 85);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 0);
    glVertex2i(50, 100);
    glVertex2i(91, 85);
    glVertex2i(89, 105);
    glVertex2i(52, 120);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 0);
    glVertex2i(54, 135);
    glVertex2i(89, 120);
    glVertex2i(87, 140);
    glVertex2i(55, 155);
    glEnd();

    glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 0, 0);
    glVertex2i(56, 170);
    glVertex2i(87, 155);
    glVertex2i(85, 175);
    glVertex2i(57, 190);
    glEnd();
}
// Variables
int _carOne = 0;
int _carTwo = 0;
int _carThree = 0;
int _carFour = 0;
float _boatOne = 0.0;
float _boatTwo = 0.0;
float _boatThree = 0.0;
float _cloudOne = 0.0;
float _cloudTwo = 0.0;
float _cloudThree = 0.0;
float _plane = 0.0;
float speed=1;
float _rain = 0.0;

bool isRainyDay = false;

void drawRain(int value)
{

    if (isRainyDay)
    {


        glBegin(GL_POINTS);
        for (int i = 1; i <= 1050; i++)
        {
            int x = rand();
            int y = rand();
            x %= 1050;
            y %= 1000;
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x, y);
            glVertex2d(x + 5, y + 10);
            glEnd();
        }
        glEnd();
    }
}
void update(int value)
{
    _plane += speed;

    // Car one: moving right
    _carOne += 3.0;
    if (_carOne > 250)
    {
        _carOne = -900;
    }

    // Car Two: moving right
    _carTwo += 5.0;
    if (_carTwo > 950)
    {
        _carTwo -= 2000;
    }

    // Car three: moving left
    _carThree -= 2.0;
    if (_carThree < -640)
    {
        _carThree = 640;
    }
    // Car four: moving left
    _carFour -= 6.0;
    if (_carFour < -740)
    {
        _carFour = 940;
    }

    // Boat one : Right
    _boatOne += 0.80;
    if (_boatOne > 1200)
    {
        _boatOne -= 1300;
    }

    // Boat two : Left
    _boatTwo -= 3;
    if (_boatTwo < -900)
    {
        _boatTwo = 400;
    }

    // Boat three : Left
    _boatThree -= 0.90;
    if (_boatThree < -1100)
    {
        _boatThree = 400;
    }
    // Cloud one: moving Left
    _cloudOne -= 0.25;
    if (_cloudOne < -250)
    {
        _cloudOne = 900;
    }

    // cloud 2 move : Right
    _cloudTwo += 0.20;
    if (_cloudTwo > 1200)
    {
        _cloudTwo -= 1300;
    }

    // cloud 3 move : Right
    _cloudThree += 0.20;
    if (_cloudThree > 1200)
    {
        _cloudThree -= 1300;
    }

    // plane move : Right
    //_plane += 0.70;
    if (_plane > 1200)
    {
        _plane -= 1300;
    }

    glutPostRedisplay();          // Update the GLUT
    glutTimerFunc (25, update, 0); // Re-call it
}

// Glut display function
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen

    // Sky and River
    drawSky();
    drawSkyBottom();
    drawRiver();

    // Boat 1 with animation
    glPushMatrix();
    glTranslated(_boatOne, 0, 0);
    drawBoatOne();
    glPopMatrix();

    // Boat 2 with animation
    glPushMatrix();
    glTranslated(_boatTwo, 0, 0);
    drawBoatTwo();
    glPopMatrix();

    // Boat 3 with animation
    glPushMatrix();
    glTranslated(_boatThree,-100, 0);
    drawBoatThree();
    glPopMatrix();

    // Grass, Shades, Roads, Signals, Zebra-crossing
    drawGrass();
    drawLandShades();
    drawRoads();
    drawRoadSigns();
    drawZebracrossing();
    // drawSignals();
        glPushMatrix();
    glTranslatef(450,550,0);
    glScalef(400,400,0);
    Bus();
    glScalef(0.004,0.004,0);
    glTranslatef(-110,-220,0);
        BusTire();
    glTranslatef(-50-10,0,0);
        BusTire();
    glTranslatef(-40+10,0,0);
    BusTire();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(400,0,0);
    drawSignals();
    glPopMatrix();
    //Car 1 with animation
    glPushMatrix();
    glTranslated(_carOne, 5, 0);
    drawCarOne(); // Car One
    glPopMatrix();

    //Car 2
    glPushMatrix();
    glTranslated(_carTwo, -25, 0);
    drawCarTwo();
    glPopMatrix();

    // Car 3 with animation
    glPushMatrix();
    glTranslated(_carThree, 20, 0);
    drawCarThree(); // Car three
    glPopMatrix();

    // Car 4 with animation
    glPushMatrix();
    glTranslated(_carFour, -25, 0);
    drawCarFour(); // Car four
    glPopMatrix();

    drawHomes();
    drawTrees();
    drawSun();

    // Cloud 1 with Animation
    glPushMatrix();
    glTranslated(_cloudOne, 0, 0);
    drawCloudOne();
    glPopMatrix();
    // drawCloudOne();

    // cloud 2 with animation
    glPushMatrix();
    glTranslated(_cloudTwo, 0, 0);
    drawCloudTwo();
    glPopMatrix();

    // cloud 3 with animation
    glPushMatrix();
    glTranslated(_cloudThree, 0, 0);
    drawCloudThree();
    glPopMatrix();

    // plane with animation
    glPushMatrix();
    glTranslated(_plane, 0, 0);
    drawPlane();
    glPopMatrix();

    // Sun and Bench

    drawBench();
    glPushMatrix();
    glTranslatef(180,0,0);
    drawBench();
    glPopMatrix();


    // Rain
    drawRain(_rain);


    glutSwapBuffers();
}



void myKeyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'r':
        isRainyDay = true;
        break;

    case 's':
        isRainyDay = false;
        break;

    case 'f':
    speed += 1;
    break;
    case 'b':
    speed = 1;
    break;

    default:
        break;
    }
}

void initRendering(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // set the bg color to a bright black
    glMatrixMode(GL_PROJECTION);      // set up appropriate matrices-
    gluOrtho2D(0.0, 1050.0, 0.0, 1000.0);
}

int main(int iArgc, char **cppArgv)
{

    // Menu

    cout << "\n:::::::::::Suburb  Scenario :::::::::::\n\n";
    cout << "Press r for Rainy Day\n";
    cout << "Press s for stopping the Rain\n";
    cout << "Press f to speedup the plane\n";
    cout << "Press b to normal the speed of plane\n";

    cout << "\n\n::::::::::: Project by :::::::::::\n";
    cout << "--> Tanjim Mahmud Rakin\n";
    cout << "--> Md Jubayer Islam \n";


    glutInit(&iArgc, cppArgv);                                // initialize the toolkit
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // set the display mode
    glutInitWindowSize(800, 500);                             // set window size
    glutInitWindowPosition(150, 150);                         // set window upper left corner position on screen
    glutCreateWindow("River Side Suburb Scenario");                  // open the screen window

    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(myKeyboard);
    glutTimerFunc(25, update, 0);
    initRendering(); // additional initializations as necessary
    glutMainLoop();  // go into a endless loop

    return 0;
}

