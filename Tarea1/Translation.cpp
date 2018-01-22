#include "Translation.h"

void Translation::Triangulo(int X1, int Y1, int X2, int Y2, int X3, int Y3)
{
	std::cout << "Introduce cuanto quieres mover tu triangulo\n";
	std::cout << "X = ";
	std::cin >> Tx;

	if (!iswalnum(Tx))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	std::cout << "Y = ";
	std::cin >> Ty;

	if (!iswalnum(Ty))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	int MatrizOriginalP1[3][1] = {
		{X1},
		{Y1},
		{1}
	};

	int MatrizOriginalP2[3][1] = {
		{X2},
		{Y2},
		{1}
	};

	int MatrizOriginalP3[3][1] = {
		{X3},
		{Y3},
		{1}
	};

	int MatrizTrans[3][3] = {
		{1,0,Tx},
		{0,1,Ty},
		{0,0,1}
	};

	//Punto1
	int MatrizFinalP1[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizOriginalP1[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP1[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP1[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}
		
		std::cout << "\n";
	}

	std::cout << "\n";

	//Punto2
	int MatrizFinalP2[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP2[x][y] = (MatrizTrans[x][0] * MatrizOriginalP2[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP2[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP2[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
			std::cout << MatrizFinalP2[x][y];

		std::cout << "\n";
	}

	std::cout << "\n";

	//Punto3
	int MatrizFinalP3[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP3[x][y] = (MatrizTrans[x][0] * MatrizOriginalP3[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP3[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP3[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
			std::cout << MatrizFinalP3[x][y];

		std::cout << "\n";
	}

	std::cout << "\n";
	
	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Translation::Circulo(int X1, int Y1, int r)
{
	std::cout << "Introduce cuanto quieres mover tu circulo\n";
	std::cout << "X = ";
	std::cin >> Tx;

	if (!iswalnum(Tx))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	std::cout << "Y = ";
	std::cin >> Ty;

	if (!iswalnum(Ty))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	int MatrizOriginalP1[3][1] = {
		{X1},
		{Y1},
		{1}
	};

	int MatrizTrans[3][3] = {
		{1,0,Tx},
		{0,1,Ty},
		{0,0,1}
	};

	//Punto1
	int MatrizFinalP1[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizOriginalP1[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP1[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP1[2][y]);

	std::cout << "Tu centro del circulo se encuentra en la posicion: \n";
	
	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}
		std::cout << "\n";
	}
	std::cout << "con un radio de " << r << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Translation::Cuadrado(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)
{
	std::cout << "Introduce cuanto quieres mover tu cuadrado\n";
	std::cout << "X = ";
	std::cin >> Tx;

	if (!iswalnum(Tx))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	std::cout << "Y = ";
	std::cin >> Ty;

	if (!iswalnum(Ty))
	{
		std::cout << "introduce solamente numeros\n";
		system("Pause");
	}

	int MatrizOriginalP1[3][1] = {
		{X1},
		{Y1},
		{1}
	};

	int MatrizOriginalP2[3][1] = {
		{X2},
		{Y2},
		{1}
	};

	int MatrizOriginalP3[3][1] = {
		{X3},
		{Y3},
		{1}
	};

	int MatrizOriginalP4[3][1] = {
		{X4},
		{Y4},
		{1}
	};

	int MatrizTrans[3][3] = {
		{1,0,Tx},
		{0,1,Ty},
		{0,0,1}
	};

	//Punto1
	int MatrizFinalP1[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizOriginalP1[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP1[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP1[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}

		std::cout << "\n";
	}

	std::cout << "\n";

	//Punto2
	int MatrizFinalP2[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP2[x][y] = (MatrizTrans[x][0] * MatrizOriginalP2[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP2[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP2[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
			std::cout << MatrizFinalP2[x][y];

		std::cout << "\n";
	}

	std::cout << "\n";

	//Punto3
	int MatrizFinalP3[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP3[x][y] = (MatrizTrans[x][0] * MatrizOriginalP3[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP3[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP3[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
			std::cout << MatrizFinalP3[x][y];

		std::cout << "\n";
	}

	std::cout << "\n";

	//Punto4
	int MatrizFinalP4[3][1];

	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP4[x][y] = (MatrizTrans[x][0] * MatrizOriginalP4[0][y]) + (MatrizTrans[x][1] * MatrizOriginalP3[1][y]) + (MatrizTrans[x][2] * MatrizOriginalP3[2][y]);

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 1; ++y)
			std::cout << MatrizFinalP4[x][y];

		std::cout << "\n";
	}

	std::cout << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

Translation::Translation()
{
}

Translation::~Translation()
{
}
