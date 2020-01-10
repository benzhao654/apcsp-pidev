#include <stdio.h>
#include <student.h>

int main()
{
	char answer;
  int counter;
	printf("Enter a student?(y/n) ");
	scanf("%c", &answer);
	counter = 0;
	student students[100];

	while (answer == 'y')
	{
		enterstud(&students[counter]);
    counter++;
    printf("Enter a student?(y/n) ");
	  scanf(" %c", &answer);
	}

  for (int i = 0; i < counter; i++)
  {
    printstud(&students[i]);
  }
}


