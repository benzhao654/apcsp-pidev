#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535

float findarea(float radius)
{
	float area;
	area = PI * radius * radius;

	return area;
}

int main(int argc, char* argv[])
{
  float min, max;
  
  if (argc == 3)
  {
  min = atof(argv[1]);
  max = atof(argv[2]);
  }
  else
  {
    printf("Please reenter your numbers\nMin: ");
    scanf("%f", &min);
    printf("Max: ");
    scanf("%f", &max);
  }
  
  while ( max < min)
  {
    printf("%d", argc);
    printf("Please reenter your numbers\nMin: ");
    scanf("%f", &min);
    printf("Max: ");
    scanf("%f", &max);
  }


  

	float rad, i;
	for (i = min; i < max; i+=0.5)
	{
		rad = findarea(i);
		printf("Area of circle with radius %f is %f\n",i , rad);
	}

	return 0;


}

