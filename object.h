#ifndef _OBJECT_H_
#define _OBJECT_H_
#include <iostream>
#include <gl/glut.h>
#include "math.h"

using namespace std;

class Object{	
public:
Object();
Object(GLfloat x, GLfloat y);


		
float Pi();

void drawSquare(GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3, GLint x4, GLint y4);

void drawTriangle(GLint x1, GLint y1,GLint x2, GLint y2, GLint x3, GLint y3);

void drawCircle(GLint x, GLint y, GLint radius,GLint side, GLfloat orientation,GLfloat width, GLfloat height);

void drawLine(GLint x, GLint y);

void Translatef(GLfloat tX, GLfloat tY, GLfloat tZ);

void Scalef(GLfloat sX, GLfloat sY, GLfloat sZ);

void drawRook(GLint x, GLint y);
	
void drawBishop(GLint x, GLint y);

void drawKnight(GLint x, GLint y);

void drawKing(GLint x, GLint y);

void drawQueen(GLint x, GLint y);

void drawPawn(GLint x, GLint y);


GLfloat x, y;


};
#endif
