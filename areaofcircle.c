#include <stdio.h>

#define PI 3.1415926535

float findarea(float radius)
{
	float area;
	area = PI * radius * radius;

	return area;
}

int main()
{
	float rad, i;
	for (i = 3.5; i < 12.5; i+=0.5)
	{
		rad = findarea(i);
		printf("Area of circle with radius %f is %f\n",i , rad);
	}

	return 0;


}

