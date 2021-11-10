#include "pch.h"
#include "B635019.h"

void initialize() {

}

void B635019 :: drawSphere() {

	glEnable(GL_LIGHTING);

	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT2);

	GLfloat light_diffuse[] = { 1.0f,1.0f,1.0f,1.0f }; //diffuse
	GLfloat light_position[] = { 3.0f,3.0f,6.0f,0.0f }; // ºû À§Ä¡, directional

	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse); // ±¤¿ø 0 diffuse
	glLightfv(GL_LIGHT2, GL_POSITION, light_position); // ±¤¿ø 2 position À§Ä¡¿¡¼­ ºû.

	GLfloat no_mat[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);

	//GLfloat light_position[] = { 0.0f,0.0f,0.0f,1.0f }; 
	//glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	//GLfloat light_spot_direction[] = { 10.0f,10.0f,0.0f };
	//glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, light_spot_direction);

	//glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, 45.0f);
	//glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, 10.0f);


	glBegin(GL_LINES);

	glColor3f(0.0f, 1.0f, 0.0f); // Green
	
	glVertex3f(10.0f, 0.0f, 0.0f); // xÃà
	glVertex3f(-10.0f, 0.0f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f); // red

	glVertex3f(0.0f, 10.0f, 0.0f); // y Ãà
	glVertex3f(0.0f, -10.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 1.0f); // Blue

	glVertex3f(0.0f, 0.0f, 10.0f); // zÃà
	glVertex3f(0.0f, 0.0f, -10.0f);

	glEnd();



	glBegin(GL_TRIANGLE_STRIP); //Á¤À°¸éÃ¼

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, -0.5f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(0.5f, 0.5f, 1.0f);

	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);

	glEnd();

	return;
}