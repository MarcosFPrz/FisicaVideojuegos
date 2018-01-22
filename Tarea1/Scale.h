#pragma once
#include <iostream>

class Scale
{
public:
	Scale();
	void Triangulo(float X1, float Y1, float X2, float Y2, float X3, float Y3);
	void Circulo(float X1, float Y1, float r);
	void Cuadrado(float X1, float Y1, float X2, float Y2, float X3, float Y3, float X4, float Y4);
	~Scale();

private:
	double escala;
	double Sx, Sy;
};

