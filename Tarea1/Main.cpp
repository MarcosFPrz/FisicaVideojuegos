#include <iostream>
#include "Translation.h"
#include "Rotation.h"
#include "Scale.h"
#include "Inclination.h"

int main()
{
	Translation T;
	Rotation R;
	Scale S;
	Inclination I;

	T.Triangulo(40,15,10, 35, 50, 55);
	T.Circulo(2,2,10);
	T.Cuadrado(0, 0, 2, 0, 0, 2, 2, 2);

	R.Triangulo(40, 15, 10, 35, 50, 55);
	R.Circulo(3, 3, 8);
	R.Cuadrado(0, 0, 0, 2, 2, 0, 2, 2);
	
	S.Triangulo(40, 15, 10, 35, 50, 55);
	S.Circulo(2, 2, 2);
	S.Cuadrado(0,0,2,0,0,2,2,2);
	
	I.Cuadrado(0, 0, 2, 0, 0, 2, 2, 2);

	system("Pause");

	return 0;
}