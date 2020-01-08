#include <stdio.h>
#include <string.h>

void strcompare(char* str1, char* str2);

int main()
{

	int i;
	char str1[27];
	char str2[27] = "abcdefghijklmnopqrstuvwxyz";
	str2[27] = '\0';

	for (i = 0; i < 27; i++)
	{
		str1[i] = str2[i];
	}

	printf("str1 is %s\nstr2 is %s\n",str1, str2);
	strcompare(str1, str2);

	for (i = 0; i < 27; i++)
	{
		str1[i] = str1[i] -32;
	}
	printf("str1 is %s\nstr2 is %s\n",str1, str2);
	strcompare(str1, str2);

	char str3[1000];
	strcpy(str3, str1);
	strcat(str3, str2);
	printf("str1 is %s\nstr2 is %s\nstr3 is %s\n",str1 ,str2 ,str3);




}


void strcompare(char* str1, char* str2)
{
	int same = strcmp(str1, str2);

	if (same == 0)
	{
		printf("the strings are the same\n");
	}
	else
		printf("the strings are not the same\n");

}
