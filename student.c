#include <stdio.h>

typedef struct{
	char fn[100];
	char ln[100];
	int age;
	int id;

} student;

void printstud(student* stud)
{
	printf("Name: %s %s\n", stud->fn, stud->ln);
	printf("Age: %d\n", stud->age);
	printf("id: %d\n", stud->id);
}

void enterstud(student student)
{
	printf("Enter the first name: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name->fn);

	printf("Enter the last name: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name->ln);

	printf("Enter the age: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name->age);

	printf("Enter the student id: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name->id);

}
int main()
{
	char answer, counter;
	printf("Enter a student?(y/n) ");
	scanf("%c",answer);
	counter = 'a';
	student students[100];

	while (answer == 'y')
	{
		
	}







}
