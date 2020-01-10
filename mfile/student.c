#include <student.h>
#include <stdio.h>
void printstud(student* stud)
{
	printf("Name: %s %s\n", stud->fn, stud->ln);
	printf("Age: %d\n", stud->age);
	printf("id: %d\n", stud->id);
}

void enterstud(student* stu)
{
	printf("Enter the first name: ");
  scanf("%s", stu->fn);

	printf("Enter the last name: ");
  scanf("%s", stu->ln);

	printf("Enter the age: ");
  scanf("%d", &(stu->age));

	printf("Enter the student id: ");
  scanf("%d", &(stu->id));
}
