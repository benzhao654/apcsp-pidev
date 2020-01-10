#include <stdio.h>

void arrayadd(int* arr, int s, int n)
{
	int i;

	for (i = 0; i < s;  i++)
	{
		arr[i] += n;
	}


}

int main()
{
	int array[100];

	for (int i = 0; i < 100; i++)
	{
		array[i] = i * i;
		printf("%d\n", array[i]);

	}
	arrayadd(array, 100, 5);
	for (int i = 0; i < 100; i++){
		printf("%d\n", array[i]);
	}



}

