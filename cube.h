#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class cube
{
public:
	cube() {};
	void drawCube(float x, float y, float z, bool rk, float deg);

};


