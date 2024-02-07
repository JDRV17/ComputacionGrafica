#include "teapot.h"

void teapot::drawTeapot(float x, float y, float z)
{
    glPushMatrix();
        glTranslatef(x, y, z);
        glutSolidTeapot(0.5);
    glPopMatrix();
}