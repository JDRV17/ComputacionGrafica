#include "Monja.h"

void Monja::DibujarMonja(float x, float y, float z) 
{
    glPushMatrix();
        glPushMatrix();
            glTranslatef(x, y - 0.1, z);
            glutSolidSphere(0.5, 20, 20);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(x, y, z);
            glBegin(GL_TRIANGLES);
                glVertex3f(1, 0, 0);
                glVertex3f(0, 1, 0);
                glVertex3f(-1, 0, 0);
            glEnd();
        glPopMatrix();
     glPopMatrix();
}
