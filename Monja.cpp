#include "Monja.h"

void Monja::DibujarMonja(int seg, float alpha, float x, float y, float z) 
{
	glPushMatrix();
		glTranslatef(x-1, y+0.0, z+0.0);
		glRotatef((GLfloat)alpha, 0.0, 0.0, 1.0);
		glTranslatef(x-1, y+0.0, z+0.0);
		glPushMatrix();
			glScalef(2, 0.4, 1.0);
			glutSolidCube(1.0); /* shoulder */
		glPopMatrix();
		
		for (int i = 0; i < seg; i++)
		{
			glTranslatef(1, 0.0, 0.0);
			glRotatef((GLfloat)alpha+(i*10), 0.0, 0.0, 1.0);
			glTranslatef(1, 0.0, 0.0);
			glPushMatrix();
			glScalef(2, 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}
		
	glPopMatrix();
}
