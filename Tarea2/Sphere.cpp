#include "Sphere.h"

Sphere::Sphere()
{
}

void Sphere::Translate(float x, float y, float z)
{
	p1.x = 0;
	p1.y = 0;
	p1.z = 0;

	//Matriz Traslacion
	int MatrizTrans[4][4] = {
		{1,0,0,x},
		{0,1,0,y},
		{0,0,1,z},
		{0,0,0,1}
	};

	//Matriz PCentro
	int MatrizP1[4][1] = {
		{p1.x},
		{p1.y},
		{p1.z},
		{p1.d}
	};

	//Operacion PCentro
	int MatrizFinalP1[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizP1[0][y]) + (MatrizTrans[x][1] * MatrizP1[1][y]) + (MatrizTrans[x][2] * MatrizP1[2][y]) + (MatrizTrans[x][3] * MatrizP1[3][y]);

	std::cout << "Tu centro de la esfera trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}

		std::cout << "\n";
	}
	std::cout << "con un radio de " << radio << std::endl;
	std::cout << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Sphere::Scale(float x, float y, float z)
{
	p1.x = 0;
	p1.y = 0;
	p1.z = 0;

	//Matriz Traslacion
	int MatrizTrans[4][4] = {
		{x,0,0,0},
		{0,y,0,0},
		{0,0,z,0},
		{0,0,0,1}
	};

	//Matriz PCentro
	int MatrizP1[4][1] = {
		{p1.x},
		{p1.y},
		{p1.z},
		{p1.d}
	};

	//Centro
	int MatrizFinalP1[3][1];

	std::cout << "Tu centro del circulo se encuentra en la posicion: " << p1.x << " , " << p1.y << " , " << p1.z << "\n";
	std::cout << "con un radio en x de " << radio + x << "\n";
	std::cout << "con un radio en y de " << radio + y << "\n";
	std::cout << "con un radio en z de " << radio + z << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Sphere::Rotate(float angulo, float x, float y, float z)
{
	if (x == 1)
	{
		//Centro X
		XF = (p1.x * 1);
		YF = (p1.y * cos(angulo * PI / 180)) + (p1.z *(-sin(angulo * 2 * PI / 360)));
		ZF = (p1.y * sin(angulo * 2 * PI / 360)) + (p1.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del centro rotados en X son: " << XF << " , " << YF << " , " << ZF << "\n";
		std::cout << "Con un radio de " << radio << std::endl;

	}

	if (y == 1)
	{
		//Centro Y
		XF = (p1.x * cos(angulo * PI / 180)) + (p1.z * sin(angulo * 2 * PI / 360));
		YF = (p1.y * 1);
		ZF = (p1.x * (-sin(angulo * 2 * PI / 360))) + (p1.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del centro rotados en Y son: " << XF << " , " << YF << " , " << ZF << "\n";
		std::cout << "Con un radio de " << radio << std::endl;
	}

	if (z == 1)
	{
		//Centro Z
		XF = (p1.x * cos(angulo * PI / 180)) + (p1.y * (-sin(angulo * 2 * PI / 360)));
		YF = (p1.x * sin(angulo * 2 * PI / 360)) + ((p1.y * cos(angulo * PI / 180)));
		ZF = (p1.z * 1);
		std::cout << "Coordenadas del centro rotados en Z son: " << XF << " , " << YF << " , " << ZF << "\n";
		std::cout << "Con un radio de " << radio << std::endl;
	}

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);

}

Sphere::~Sphere()
{
}
