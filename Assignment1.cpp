#include <iostream>
#include <gl/glut.h>
#include<windows.h>
#include <math.h>
#include "object.h"


using namespace std; 

Object object = Object();



void chessboard()
{

	glClearColor(0, 1, 1, 0);// For displaying the window color

	glMatrixMode(GL_PROJECTION);// Choosing the type of projection

	glLoadIdentity();

	gluOrtho2D(0, 800, 0,800);// for setting the transformation which here is 2D

	
	int c = 0;	

	glClear(GL_COLOR_BUFFER_BIT);
	GLint x, y;

//Chessboard
	for (x = 0; x <= 800; x += 100)
	{
		for (y = 0; y <= 800; y += 100)
		{
			// if color is 0 then draw white box and change value of color = 1
	if (c == 0)
	{
		glColor3f(0.945f, 0.980f, 0.933f); //white color
		c = 1;
	}
	// if color is 1 then draw black box and change value of color = 0
	else
	{
		glColor3f(0.478f, 0.231f, 0.043f); // brown color 
		c = 0;
	}
		object.drawSquare(x, y + 100, x + 100, y + 100, x + 100, y, x, y);
		}
	}
	
//Chess Pieces
	glColor3f(0.105, 0.094, 0.066); // Black Chess Pieces 
	glScalef(1.0,1.0,1.0);
	object.drawRook(50,50);
	object.drawKnight(150,50);
	object.drawKnight(550,250);
	object.drawBishop(250,50);
	object.drawBishop(550,50);
	object.drawQueen(350,50);
	object.drawKing(450,50);
	
	glPushMatrix();
		
	for(int i = 0; i < 5 ; i++)
	{
		object.drawPawn(450,150);
		glTranslatef(100,0,0);
	
	}
	glPopMatrix();
	object.drawPawn(50,150);
	object.drawPawn(150,150);
	object.drawPawn(250,350);
	object.drawPawn(350,350);
	object.drawRook(750,50);


	glColor3f(0.701, 0.521, 0.384); // Brown Chess Pieces 
	glScalef(1.0,1.0,1.0);
	object.drawRook(750,750);
	object.drawKnight(650,750);
	object.drawKnight(250,550);		
	object.drawBishop(250,750);
	object.drawBishop(550,750);
	object.drawQueen(350,750);
	object.drawKing(450,750);
	
	glPushMatrix();
	for(int i = 0; i < 5 ; i++)
	{
		object.drawPawn(450,650);
		glTranslatef(100,0,0);
	}
	glPopMatrix();
	object.drawPawn(50,650);
	object.drawPawn(150,650);
	object.drawPawn(250,450);
	object.drawPawn(350,450);
	object.drawRook(50,750);

	glFlush();
	glFinish(); 
}



int main(int agrc, char ** argv)
{

	glutInit(&agrc, argv);// Initialize GLUT

// Set display mode
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);// Set top - left display window position.

	glutInitWindowPosition(100, 100);

	glutInitWindowSize(800, 800);// Set display window width and height

	glutCreateWindow("Chess");// Create display window with the given title

	glutDisplayFunc(chessboard);

	glutMainLoop();
}
