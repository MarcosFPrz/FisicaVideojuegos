#include "Cube.h"

Cube::Cube()
{
}

void Cube::Translate(float x, float y, float z)
{
	int contador = 1;

	p1.x = -5;
	p1.y = -5;
	p1.z = -5;

	p2.x = 5;
	p2.y = -5;
	p2.z = -5;

	p3.x = 5;
	p3.y = 5;
	p3.z = -5;

	p4.x = -5;
	p4.y = 5;
	p4.z = -5;

	p5.x = -5;
	p5.y = -5;
	p5.z = 5;

	p6.x = 5;
	p6.y = -5;
	p6.z = 5;

	p7.x = 5;
	p7.y = 5;
	p7.z = 5;

	p8.x = -5;
	p8.y = 5;
	p8.z = 5;

	//Matriz Traslacion
	int MatrizTrans[4][4] = {
		{1,0,0,x},
		{0,1,0,y},
		{0,0,1,z},
		{0,0,0,1}
	};

	//Matriz P1
	int MatrizP1[4][1] = {
		{p1.x},
		{p1.y},
		{p1.z},
		{p1.d}
	};

	//Matriz P2
	int MatrizP2[4][1] = {
		{p2.x},
		{p2.y},
		{p2.z},
		{p2.d}
	};

	//Matriz P3
	int MatrizP3[4][1] = {
		{p3.x},
		{p3.y},
		{p3.z},
		{p3.d}
	};

	//Matriz P4
	int MatrizP4[4][1] = {
		{p4.x},
		{p4.y},
		{p4.z},
		{p4.d}
	};

	//Matriz P5
	int MatrizP5[4][1] = {
		{p5.x},
		{p5.y},
		{p5.z},
		{p5.d}
	};

	//Matriz P6
	int MatrizP6[4][1] = {
		{p6.x},
		{p6.y},
		{p6.z},
		{p6.d}
	};

	//Matriz P7
	int MatrizP7[4][1] = {
		{p7.x},
		{p7.y},
		{p7.z},
		{p7.d}
	};

	//Matriz P8
	int MatrizP8[4][1] = {
		{p8.x},
		{p8.y},
		{p8.z},
		{p8.d}
	};

	//Operacion P1
	int MatrizFinalP1[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizP1[0][y]) + (MatrizTrans[x][1] * MatrizP1[1][y]) + (MatrizTrans[x][2] * MatrizP1[2][y]) + (MatrizTrans[x][3] * MatrizP1[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 2
	int MatrizFinalP2[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP2[x][y] = (MatrizTrans[x][0] * MatrizP2[0][y]) + (MatrizTrans[x][1] * MatrizP2[1][y]) + (MatrizTrans[x][2] * MatrizP2[2][y]) + (MatrizTrans[x][3] * MatrizP2[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP2[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 3
	int MatrizFinalP3[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP3[x][y] = (MatrizTrans[x][0] * MatrizP3[0][y]) + (MatrizTrans[x][1] * MatrizP3[1][y]) + (MatrizTrans[x][2] * MatrizP3[2][y]) + (MatrizTrans[x][3] * MatrizP3[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP3[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 4
	int MatrizFinalP4[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP4[x][y] = (MatrizTrans[x][0] * MatrizP4[0][y]) + (MatrizTrans[x][1] * MatrizP4[1][y]) + (MatrizTrans[x][2] * MatrizP4[2][y]) + (MatrizTrans[x][3] * MatrizP4[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP4[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 5
	int MatrizFinalP5[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP5[x][y] = (MatrizTrans[x][0] * MatrizP5[0][y]) + (MatrizTrans[x][1] * MatrizP5[1][y]) + (MatrizTrans[x][2] * MatrizP5[2][y]) + (MatrizTrans[x][3] * MatrizP5[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP5[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 6
	int MatrizFinalP6[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP6[x][y] = (MatrizTrans[x][0] * MatrizP6[0][y]) + (MatrizTrans[x][1] * MatrizP6[1][y]) + (MatrizTrans[x][2] * MatrizP6[2][y]) + (MatrizTrans[x][3] * MatrizP6[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP6[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 7
	int MatrizFinalP7[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP7[x][y] = (MatrizTrans[x][0] * MatrizP7[0][y]) + (MatrizTrans[x][1] * MatrizP7[1][y]) + (MatrizTrans[x][2] * MatrizP7[2][y]) + (MatrizTrans[x][3] * MatrizP7[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP7[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 8
	int MatrizFinalP8[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP8[x][y] = (MatrizTrans[x][0] * MatrizP8[0][y]) + (MatrizTrans[x][1] * MatrizP8[1][y]) + (MatrizTrans[x][2] * MatrizP8[2][y]) + (MatrizTrans[x][3] * MatrizP8[3][y]);

	std::cout << "Tu punto " << contador << " trasladado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP8[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Cube::Scale(float x, float y, float z)
{
	int contador = 1;

	p1.x = -5;
	p1.y = -5;
	p1.z = -5;

	p2.x = 5;
	p2.y = -5;
	p2.z = -5;

	p3.x = 5;
	p3.y = 5;
	p3.z = -5;

	p4.x = -5;
	p4.y = 5;
	p4.z = -5;

	p5.x = -5;
	p5.y = -5;
	p5.z = 5;

	p6.x = 5;
	p6.y = -5;
	p6.z = 5;

	p7.x = 5;
	p7.y = 5;
	p7.z = 5;

	p8.x = -5;
	p8.y = 5;
	p8.z = 5;

	//Matriz Escala
	int MatrizTrans[4][4] = {
		{x,0,0,0},
		{0,y,0,0},
		{0,0,z,0},
		{0,0,0,1}
	};

	//Matriz P1
	int MatrizP1[4][1] = {
		{p1.x},
		{p1.y},
		{p1.z},
		{p1.d}
	};

	//Matriz P2
	int MatrizP2[4][1] = {
		{p2.x},
		{p2.y},
		{p2.z},
		{p2.d}
	};

	//Matriz P3
	int MatrizP3[4][1] = {
		{p3.x},
		{p3.y},
		{p3.z},
		{p3.d}
	};

	//Matriz P4
	int MatrizP4[4][1] = {
		{p4.x},
		{p4.y},
		{p4.z},
		{p4.d}
	};

	//Matriz P5
	int MatrizP5[4][1] = {
		{p5.x},
		{p5.y},
		{p5.z},
		{p5.d}
	};

	//Matriz P6
	int MatrizP6[4][1] = {
		{p6.x},
		{p6.y},
		{p6.z},
		{p6.d}
	};

	//Matriz P7
	int MatrizP7[4][1] = {
		{p7.x},
		{p7.y},
		{p7.z},
		{p7.d}
	};

	//Matriz P8
	int MatrizP8[4][1] = {
		{p8.x},
		{p8.y},
		{p8.z},
		{p8.d}
	};

	//Operacion P1
	int MatrizFinalP1[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP1[x][y] = (MatrizTrans[x][0] * MatrizP1[0][y]) + (MatrizTrans[x][1] * MatrizP1[1][y]) + (MatrizTrans[x][2] * MatrizP1[2][y]) + (MatrizTrans[x][3] * MatrizP1[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP1[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 2
	int MatrizFinalP2[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP2[x][y] = (MatrizTrans[x][0] * MatrizP2[0][y]) + (MatrizTrans[x][1] * MatrizP2[1][y]) + (MatrizTrans[x][2] * MatrizP2[2][y]) + (MatrizTrans[x][3] * MatrizP2[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP2[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 3
	int MatrizFinalP3[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP3[x][y] = (MatrizTrans[x][0] * MatrizP3[0][y]) + (MatrizTrans[x][1] * MatrizP3[1][y]) + (MatrizTrans[x][2] * MatrizP3[2][y]) + (MatrizTrans[x][3] * MatrizP3[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP3[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 4
	int MatrizFinalP4[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP4[x][y] = (MatrizTrans[x][0] * MatrizP4[0][y]) + (MatrizTrans[x][1] * MatrizP4[1][y]) + (MatrizTrans[x][2] * MatrizP4[2][y]) + (MatrizTrans[x][3] * MatrizP4[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP4[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 5
	int MatrizFinalP5[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP5[x][y] = (MatrizTrans[x][0] * MatrizP5[0][y]) + (MatrizTrans[x][1] * MatrizP5[1][y]) + (MatrizTrans[x][2] * MatrizP5[2][y]) + (MatrizTrans[x][3] * MatrizP5[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP5[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 6
	int MatrizFinalP6[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP6[x][y] = (MatrizTrans[x][0] * MatrizP6[0][y]) + (MatrizTrans[x][1] * MatrizP6[1][y]) + (MatrizTrans[x][2] * MatrizP6[2][y]) + (MatrizTrans[x][3] * MatrizP6[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP6[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 7
	int MatrizFinalP7[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP7[x][y] = (MatrizTrans[x][0] * MatrizP7[0][y]) + (MatrizTrans[x][1] * MatrizP7[1][y]) + (MatrizTrans[x][2] * MatrizP7[2][y]) + (MatrizTrans[x][3] * MatrizP7[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP7[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	//Operacion Punto 8
	int MatrizFinalP8[4][1];

	for (int x = 0; x < 4; ++x)
		for (int y = 0; y < 1; ++y)
			MatrizFinalP8[x][y] = (MatrizTrans[x][0] * MatrizP8[0][y]) + (MatrizTrans[x][1] * MatrizP8[1][y]) + (MatrizTrans[x][2] * MatrizP8[2][y]) + (MatrizTrans[x][3] * MatrizP8[3][y]);

	std::cout << "Tu punto " << contador << " escalado es igual a...\n";

	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 1; ++y)
		{
			std::cout << MatrizFinalP8[x][y];
		}

		std::cout << "\n";
	}
	++contador;
	std::cout << "\n";

	int o;
	std::cin >> o;

	if (o == 1)
		system("cls");
	else if (o == 0)
		exit(1);
}

void Cube::Rotate(float angulo, float x, float y, float z)
{
	p1.x = -5;
	p1.y = -5;
	p1.z = -5;

	p2.x = 5;
	p2.y = -5;
	p2.z = -5;

	p3.x = 5;
	p3.y = 5;
	p3.z = -5;

	p4.x = -5;
	p4.y = 5;
	p4.z = -5;

	p5.x = -5;
	p5.y = -5;
	p5.z = 5;

	p6.x = 5;
	p6.y = -5;
	p6.z = 5;

	p7.x = 5;
	p7.y = 5;
	p7.z = 5;

	p8.x = -5;
	p8.y = 5;
	p8.z = 5;

	if (x == 1)
	{
		int contador = 1;

		//Punto 1
		X1F = (p1.x * 1);
		Y1F = (p1.y * cos(angulo * PI / 180)) + (p1.z *(-sin(angulo * 2 * PI / 360)));
		Z1F = (p1.y * sin(angulo * 2 * PI / 360)) + (p1.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X1F << " , " << Y1F << " , " << Z1F << "\n";
		++contador;

		//Punto 2
		X2F = (p2.x * 1);
		Y2F = (p2.y * cos(angulo * PI / 180)) + (p2.z *(-sin(angulo * 2 * PI / 360)));
		Z2F = (p2.y * sin(angulo * 2 * PI / 360)) + (p2.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X2F << " , " << Y2F << " , " << Z2F << "\n";
		++contador;

		//Punto 3
		X3F = (p3.x * 1);
		Y3F = (p3.y * cos(angulo * PI / 180)) + (p3.z *(-sin(angulo * 2 * PI / 360)));
		Z3F = (p3.y * sin(angulo * 2 * PI / 360)) + (p3.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X3F << " , " << Y3F << " , " << Z3F << "\n";
		++contador;

		//Punto 4
		X4F = (p4.x * 1);
		Y4F = (p4.y * cos(angulo * PI / 180)) + (p4.z *(-sin(angulo * 2 * PI / 360)));
		Z4F = (p4.y * sin(angulo * 2 * PI / 360)) + (p4.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X4F << " , " << Y4F << " , " << Z4F << "\n";
		++contador;

		//Punto 5
		X5F = (p5.x * 1);
		Y5F = (p5.y * cos(angulo * PI / 180)) + (p5.z *(-sin(angulo * 2 * PI / 360)));
		Z5F = (p5.y * sin(angulo * 2 * PI / 360)) + (p5.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X5F << " , " << Y5F << " , " << Z5F << "\n";
		++contador;

		//Punto 6
		X6F = (p6.x * 1);
		Y6F = (p6.y * cos(angulo * PI / 180)) + (p6.z *(-sin(angulo * 2 * PI / 360)));
		Z6F = (p6.y * sin(angulo * 2 * PI / 360)) + (p6.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X6F << " , " << Y6F << " , " << Z6F << "\n";
		++contador;

		//Punto 7
		X7F = (p7.x * 1);
		Y7F = (p7.y * cos(angulo * PI / 180)) + (p7.z *(-sin(angulo * 2 * PI / 360)));
		Z7F = (p7.y * sin(angulo * 2 * PI / 360)) + (p7.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X7F << " , " << Y7F << " , " << Z7F << "\n";
		++contador;

		//Punto 8
		X8F = (p8.x * 1);
		Y8F = (p8.y * cos(angulo * PI / 180)) + (p8.z *(-sin(angulo * 2 * PI / 360)));
		Z8F = (p8.y * sin(angulo * 2 * PI / 360)) + (p8.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en X son: " << X8F << " , " << Y8F << " , " << Z8F << "\n";
		++contador;

		int o;
		std::cin >> o;

		if (o == 1)
			system("cls");
		else if (o == 0)
			exit(1);
	}

	if (y == 1)
	{
		int contador = 1;

		//Punto 1
		X1F = (p1.x * cos(angulo * PI / 180)) + (p1.z * sin(angulo * 2 * PI / 360));
		Y1F = (p1.y * 1);
		Z1F = (p1.x * (-sin(angulo * 2 * PI / 360))) + (p1.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X1F << " , " << Y1F << " , " << Z1F << "\n";
		++contador;

		//Punto 2
		X2F = (p2.x * cos(angulo * PI / 180)) + (p2.z * sin(angulo * 2 * PI / 360));
		Y2F = (p2.y * 1);
		Z2F = (p2.x * (-sin(angulo * 2 * PI / 360))) + (p2.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X2F << " , " << Y2F << " , " << Z2F << "\n";
		++contador;

		//Punto 3
		X3F = (p3.x * cos(angulo * PI / 180)) + (p3.z * sin(angulo * 2 * PI / 360));
		Y3F = (p3.y * 1);
		Z3F = (p3.x * (-sin(angulo * 2 * PI / 360))) + (p3.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X3F << " , " << Y3F << " , " << Z3F << "\n";
		++contador;

		//Punto 4
		X4F = (p4.x * cos(angulo * PI / 180)) + (p4.z * sin(angulo * 2 * PI / 360));
		Y4F = (p4.y * 1);
		Z4F = (p4.x * (-sin(angulo * 2 * PI / 360))) + (p4.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X4F << " , " << Y4F << " , " << Z4F << "\n";
		++contador;

		//Punto 5
		X5F = (p5.x * cos(angulo * PI / 180)) + (p5.z * sin(angulo * 2 * PI / 360));
		Y5F = (p5.y * 1);
		Z5F = (p5.x * (-sin(angulo * 2 * PI / 360))) + (p5.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X5F << " , " << Y5F << " , " << Z5F << "\n";
		++contador;

		//Punto 6
		X6F = (p6.x * cos(angulo * PI / 180)) + (p6.z * sin(angulo * 2 * PI / 360));
		Y6F = (p6.y * 1);
		Z6F = (p6.x * (-sin(angulo * 2 * PI / 360))) + (p6.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X6F << " , " << Y6F << " , " << Z6F << "\n";
		++contador;

		//Punto 7
		X7F = (p7.x * cos(angulo * PI / 180)) + (p7.z * sin(angulo * 2 * PI / 360));
		Y7F = (p7.y * 1);
		Z7F = (p7.x * (-sin(angulo * 2 * PI / 360))) + (p7.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X7F << " , " << Y7F << " , " << Z7F << "\n";
		++contador;

		//Punto 8
		X8F = (p8.x * cos(angulo * PI / 180)) + (p8.z * sin(angulo * 2 * PI / 360));
		Y8F = (p8.y * 1);
		Z8F = (p8.x * (-sin(angulo * 2 * PI / 360))) + (p8.z * cos(angulo * PI / 180));
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X8F << " , " << Y8F << " , " << Z8F << "\n";
		++contador;

		int o;
		std::cin >> o;

		if (o == 1)
			system("cls");
		else if (o == 0)
			exit(1);
	}

	if (z == 1)
	{
		int contador = 1;

		//Punto 1
		X1F = (p1.x * cos(angulo * PI / 180)) + (p1.y * (-sin(angulo * 2 * PI / 360)));
		Y1F = (p1.x * sin(angulo * 2 * PI / 360)) + ((p1.y * cos(angulo * PI / 180)));
		Z1F = (p1.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X1F << " , " << Y1F << " , " << Z1F << "\n";
		++contador;

		//Punto 2
		X2F = (p2.x * cos(angulo * PI / 180)) + (p2.y * (-sin(angulo * 2 * PI / 360)));
		Y2F = (p2.x * sin(angulo * 2 * PI / 360)) + ((p2.y * cos(angulo * PI / 180)));
		Z2F = (p2.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X2F << " , " << Y2F << " , " << Z2F << "\n";
		++contador;

		//Punto 3
		X3F = (p3.x * cos(angulo * PI / 180)) + (p3.y * (-sin(angulo * 2 * PI / 360)));
		Y3F = (p3.x * sin(angulo * 2 * PI / 360)) + ((p3.y * cos(angulo * PI / 180)));
		Z3F = (p3.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X3F << " , " << Y3F << " , " << Z3F << "\n";
		++contador;

		//Punto 4
		X4F = (p4.x * cos(angulo * PI / 180)) + (p4.y * (-sin(angulo * 2 * PI / 360)));
		Y4F = (p4.x * sin(angulo * 2 * PI / 360)) + ((p4.y * cos(angulo * PI / 180)));
		Z4F = (p4.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X4F << " , " << Y4F << " , " << Z4F << "\n";
		++contador;

		//Punto 5
		X5F = (p5.x * cos(angulo * PI / 180)) + (p5.y * (-sin(angulo * 2 * PI / 360)));
		Y5F = (p5.x * sin(angulo * 2 * PI / 360)) + ((p5.y * cos(angulo * PI / 180)));
		Z5F = (p5.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X5F << " , " << Y5F << " , " << Z5F << "\n";
		++contador;

		//Punto 6
		X6F = (p6.x * cos(angulo * PI / 180)) + (p6.y * (-sin(angulo * 2 * PI / 360)));
		Y6F = (p6.x * sin(angulo * 2 * PI / 360)) + ((p6.y * cos(angulo * PI / 180)));
		Z6F = (p6.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X6F << " , " << Y6F << " , " << Z6F << "\n";
		++contador;

		//Punto 7
		X7F = (p7.x * cos(angulo * PI / 180)) + (p7.y * (-sin(angulo * 2 * PI / 360)));
		Y7F = (p7.x * sin(angulo * 2 * PI / 360)) + ((p7.y * cos(angulo * PI / 180)));
		Z7F = (p7.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X7F << " , " << Y7F << " , " << Z7F << "\n";
		++contador;

		//Punto 8
		X8F = (p8.x * cos(angulo * PI / 180)) + (p8.y * (-sin(angulo * 2 * PI / 360)));
		Y8F = (p8.x * sin(angulo * 2 * PI / 360)) + ((p8.y * cos(angulo * PI / 180)));
		Z8F = (p8.z * 1);
		std::cout << "Coordenadas del punto " << contador << " rotados en Y son: " << X1F << " , " << Y8F << " , " << Z8F << "\n";
		++contador;

		int o;
		std::cin >> o;

		if (o == 1)
			system("cls");
		else if (o == 0)
			exit(1);
	}
}

Cube::~Cube()
{
}