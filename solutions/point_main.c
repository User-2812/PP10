#include "point.h"
#include <stdio.h>

int main ()	{

	Point p = {3.0 , 4.0};

	printf("Der Punkt P hat die entfernung %f von seinem Ursprung.\n", sqrt(p.x*p.x + p.y*p.y));

	return 0;
}
