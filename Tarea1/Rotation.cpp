#include "Rotation.h"

Rotation::Rotation()
{
}

void Rotation::Triangulo(int X1, int Y1, int X2, int Y2, int X3, int Y3)
{
	std::cout << "Introduce cuanto quieres rotar tu triangulo (angulo)\n";
	std::cin >> angulo;
	
	if (!iswalnum(angulo))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	//Punto 1
	X1F = (X1 * cos(angulo * PI / 180)) + (Y1 * (-sin(angulo * 2 * PI / 360)));
	Y1F = (X1 * sin(angulo * 2 * PI / 360)) + ((Y1 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X1 rotado es " << X1F << "\n";
	std::cout << "La posicion de Y1 rotado es " << Y1F << "\n";

	//Punto 2
	X2F = (X2* cos(angulo * PI / 180)) + (Y2 * (-sin(angulo * 2 * PI / 360)));
	Y2F = (X2 * sin(angulo * 2 * PI / 360)) + ((Y2 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X2 rotado es " << X2F << "\n";
	std::cout << "La posicion de Y2 rotado es " << Y2F << "\n";

	//Punto 3
	X3F = (X3 * cos(angulo * PI / 180)) + (Y3 * (-sin(angulo * 2 * PI / 360)));
	Y3F = (X3 * sin(angulo * 2 * PI / 360)) + ((Y3 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X3 rotado es " << X3F << "\n";
	std::cout << "La posicion de Y3 rotado es " << Y3F << "\n";

	int o;
	std::cin >> o;
	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Rotation::Circulo(int X1, int Y1, int r)
{
	std::cout << "Introduce cuanto quieres rotar tu circulo (angulo)\n";
	std::cin >> angulo;

	if (!iswalnum(angulo))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	//Centro
	X1F = (X1 * cos(angulo * PI / 180)) + (Y1 * (-sin(angulo * 2 * PI / 360)));
	Y1F = (X1 * sin(angulo * 2 * PI / 360)) + ((Y1 * cos(angulo * PI / 180)));
	std::cout << "La posicion X del centro del circulo rotado es " << X1F << "\n";
	std::cout << "La posicion Y del centro del circulo rotado es " << Y1F << "\n";
	std::cout << "Con un radio de " << r << "\n";

	int o;
	std::cin >> o;
	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Rotation::Cuadrado(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)
{
	std::cout << "Introduce cuanto quieres rotar tu triangulo (angulo)\n";
	std::cin >> angulo;

	if (!iswalnum(angulo))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	//Punto 1
	X1F = (X1 * cos(angulo * PI / 180)) + (Y1 * (-sin(angulo * 2 * PI / 360)));
	Y1F = (X1 * sin(angulo * 2 * PI / 360)) + ((Y1 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X1 rotado es " << X1F << "\n";
	std::cout << "La posicion de Y1 rotado es " << Y1F << "\n";

	//Punto 2
	X2F = (X2* cos(angulo * PI / 180)) + (Y2 * (-sin(angulo * 2 * PI / 360)));
	Y2F = (X2 * sin(angulo * 2 * PI / 360)) + ((Y2 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X2 rotado es " << X2F << "\n";
	std::cout << "La posicion de Y2 rotado es " << Y2F << "\n";

	//Punto 3
	X3F = (X3 * cos(angulo * PI / 180)) + (Y3 * (-sin(angulo * 2 * PI / 360)));
	Y3F = (X3 * sin(angulo * 2 * PI / 360)) + ((Y3 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X3 rotado es " << X3F << "\n";
	std::cout << "La posicion de Y3 rotado es " << Y3F << "\n";

	//Punto 3
	X4F = (X4 * cos(angulo * PI / 180)) + (Y4 * (-sin(angulo * 2 * PI / 360)));
	Y4F = (X4 * sin(angulo * 2 * PI / 360)) + ((Y4 * cos(angulo * PI / 180)));
	std::cout << "La posicion de X3 rotado es " << X4F << "\n";
	std::cout << "La posicion de Y3 rotado es " << Y4F << "\n";

	int o;
	std::cin >> o;
	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

Rotation::~Rotation()
{
}
