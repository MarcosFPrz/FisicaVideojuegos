#pragma once
#include <iostream>
#include <math.h>
#define PI 3.1416

class Rotation
{
public:
	Rotation();
	void Triangulo(int X1, int Y1, int X2, int Y2, int X3, int Y3);
	void Circulo(int X1, int Y1, int r);
	void Cuadrado(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	~Rotation();

private:
	double angulo;
	int X1F, Y1F, X2F, Y2F, X3F, Y3F, X4F, Y4F;
};

