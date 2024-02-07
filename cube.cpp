#include "cube.h"

void cube::drawCube(float x, float y, float z, bool rk, float deg)
{
    glPushMatrix();
    if (rk == 0) 
    {
        glRotatef(deg, 0, 0, 1);
    }
        glTranslatef(x, y, z);
    if (rk == 1)
    {
        glRotatef(deg, 0, 0, 1);
    }
        glutSolidCube(0.5);
    glPopMatrix();
}