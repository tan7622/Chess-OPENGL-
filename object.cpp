#include "object.h"

Object::Object(){// default constructor
		
}

Object::Object(GLfloat x, GLfloat y){ // contructor
	this->x=x;
	this->y=y;
}

float Object::Pi(){
	return 3.14159265;
}

void Object :: drawSquare(GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3, GLint x4, GLint y4){
	// Draw Square
	glBegin(GL_POLYGON);
	glPushMatrix();
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glVertex2i(x3, y3);
	glVertex2i(x4, y4);
	glEnd();

}

void Object :: drawTriangle(GLint x1, GLint y1,GLint x2, GLint y2, GLint x3, GLint y3){
	glPushMatrix();
	glBegin(GL_TRIANGLES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glVertex2i(x3, y3);
	glEnd();
	glPopMatrix();
}

void Object :: drawCircle(GLint x, GLint y, GLint radius,GLint side, GLfloat orientation,GLfloat width, GLfloat height){
	glPushMatrix();
	GLint xp,yp;
	glBegin(GL_POLYGON);
		for(int i=0; i<side; i++){
			xp = (int)(x + width * radius * cos(orientation + 2*Pi() / side * i));
			yp = (int)(y + height * radius * sin(orientation + 2*Pi() / side * i));
			glVertex2i(xp, yp);
		}	
	glEnd();
	glPopMatrix();
}


void Object::Translatef(GLfloat tX, GLfloat tY, GLfloat tZ){
	this->x = this->x + tX;
	this->y = this->y + tY;
}

void Object::Scalef(GLfloat sX, GLfloat sY, GLfloat sZ){
	this->x = this->x * sX;
	this->y = this->y * sY;
}


void Object :: drawRook(GLint x, GLint y){
	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-40, y-40);
	glVertex2i(x-40, y-20);
	glVertex2i(x+40, y-20);
	glVertex2i(x+40, y-40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-20, y);
	glVertex2i(x-30, y+25);
	glVertex2i(x+30, y+25);
	glVertex2i(x+20, y);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-10, y-20);
	glVertex2i(x-10, y+20);
	glVertex2i(x+10, y+20);
	glVertex2i(x+10, y-20);
	glEnd();
	glPopMatrix();
	
}

void Object :: drawBishop(GLint x, GLint y){
	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-40, y-40);
	glVertex2i(x-40, y-20);
	glVertex2i(x+40, y-20);
	glVertex2i(x+40, y-40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-0, y-20);
	glVertex2i(x-30, y+25);
	glVertex2i(x, y+30);
	glVertex2i(x+30, y+25);
	glEnd();
	glPopMatrix();

	drawCircle(x, y+40, 10, 500, 0, 1, 1); // x-axis, y-axis, radius, side, orientation, width, height

}

void Object :: drawKnight(GLint x, GLint y){
	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-30, y-40);
	glVertex2i(x-30, y-25);
	glVertex2i(x+30, y-25);
	glVertex2i(x+30, y-40);
	glEnd();
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_QUADS);
	glVertex2i(x-10, y-25);
	glVertex2i(x-10, y+20);
	glVertex2i(x+10, y+20);
	glVertex2i(x+10, y-25);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x,y+35);
    glVertex2i(x+30,y+35);
    glVertex2i(x+30,y);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
	glVertex2i(x-0, y+15);
	glVertex2i(x-40, y+30);
	glVertex2i(x-0, y+35);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
	glVertex2i(x-0, y);
	glVertex2i(x-40, y+10);
	glVertex2i(x-0, y+20);
    glEnd();
    glPopMatrix();


}
void Object :: drawKing(GLint x, GLint y){

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-30, y-40);
	glVertex2i(x-30, y-25);
	glVertex2i(x+30, y-25);
	glVertex2i(x+30, y-40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-10, y-25);
	glVertex2i(x-10, y+8);
	glVertex2i(x+10, y+8);
	glVertex2i(x+10, y-25);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-25, y+5);
	glVertex2i(x-25, y+20);
	glVertex2i(x+25, y+20);
	glVertex2i(x+25, y+5);
	glEnd();
	glPopMatrix();


	glLineWidth(8);
	glPushMatrix();
	glBegin(GL_LINES);
	glVertex2i(x,y);
	glVertex2i(x,y+40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex2i(x-15,y+30);
	glVertex2i(x+15,y+30);
	glEnd();
	glPopMatrix();
	
}

void Object :: drawQueen(GLint x, GLint y){

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-30, y-40);
	glVertex2i(x-30, y-25);
	glVertex2i(x+30, y-25);
	glVertex2i(x+30, y-40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-10, y-25);
	glVertex2i(x-10, y+20);
	glVertex2i(x+10, y+20);
	glVertex2i(x+10, y-25);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-15, y+25);
	glVertex2i(x-20, y+20);
	glVertex2i(x+20, y+20);
	glVertex2i(x+15, y+25);
	glVertex2i(x+20, y+30);
	glVertex2i(x-20, y+30);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_TRIANGLES);
	glVertex2i(x+0, y+40); 
	glVertex2i(x+10, y+30);
	glVertex2i(x-10, y+30);
	glEnd();
	glPopMatrix();

}

void Object :: drawPawn(GLint x, GLint y){

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex2i(x-30, y-40);
	glVertex2i(x-30, y-25);
	glVertex2i(x+30, y-25);
	glVertex2i(x+30, y-40);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	glVertex2i(x-15, y-20);
	glVertex2i(x-15, y+20);
	glVertex2i(x+15, y+20);
	glVertex2i(x+15, y-20);
	glEnd();
	glPopMatrix();

	drawCircle(x, y+30, 10, 500, 0, 1, 1);


}
