#pragma once
#include "Nodo.h"
#include <iostream>
#include <math.h>
#define PI 3.1416

class Sphere
{
public:
	Sphere();
	void Translate(float x, float y, float z);
	void Scale(float x, float y, float z);
	void Rotate(float angulo, float x, float y, float z);
	~Sphere();
private:
	Nodo p1;
	int radio = 5;
	int XF, YF, ZF;
};

