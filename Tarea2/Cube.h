#pragma once
#include "Nodo.h"
#include <iostream>
#include <math.h>
#define PI 3.1416

class Cube
{
public:
	Cube();
	void Translate(float x, float y, float z);
	void Scale(float x, float y, float z);
	void Rotate(float angle, float x, float y, float z);
	~Cube();
private:
	Nodo p1, p2, p3, p4, p5, p6, p7, p8;
	int X1F, Y1F, Z1F, X2F, Y2F, Z2F, X3F, Y3F, Z3F, X4F, Y4F, Z4F, X5F, Y5F, Z5F, X6F, Y6F, Z6F, X7F, Y7F, Z7F, X8F, Y8F, Z8F;

};

