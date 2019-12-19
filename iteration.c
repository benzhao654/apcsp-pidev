#include <stdio.h>

int main()
{
	int num, i, temp;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i < 101; i++){

		temp = num * i;
		printf("\n%d: %d", i, temp);

	}

	printf("\n");



	return 0;

}
