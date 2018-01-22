#include "Inclination.h"

void Inclination::Cuadrado(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)
{
	std::cout << "En que direccion quieres inclinarlo? X = 1, Y = 2\n";
	std::cin >> opcion;
	
	if (opcion == 1)
	{
		std::cout << "Introduce cuanto quieres inclinarlo en X\n";
		std::cin >> shx;
		std::cout << "\n";

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
			{1,shx,0},
			{0,1,0},
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
	else if (opcion == 2)
	{
		std::cout << "Introduce cuanto quieres inclinarlo en Y\n";
		std::cin >> shy;

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
			{1,0,0},
			{shy,1,0},
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
	

}

Inclination::Inclination()
{
}

Inclination::~Inclination()
{
}
