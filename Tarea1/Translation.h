#pragma once
#include <iostream>

class Translation
{
public:
	Translation();
	void Triangulo(int X1, int Y1, int X2, int Y2, int X3, int Y3);
	void Circulo(int X1, int Y1, int r);
	void Cuadrado(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	~Translation();

private:
	double Tx;
	double Ty;
};

