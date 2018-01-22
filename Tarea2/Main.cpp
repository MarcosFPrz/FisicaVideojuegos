#include <iostream>
#include "Cube.h"
#include "Sphere.h"

int main()
{
	Cube C;
	Sphere S;
	
	C.Translate(3,3,3);
	C.Scale(5, 5, 5);
	C.Rotate(30, 1, 0, 0);

	S.Translate(1, 0, 0);
	S.Scale(50, 50, 50);
	S.Rotate(90, 1, 0, 0);

	system("Pause");
	return 0;
}