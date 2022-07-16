#include <stdio.h>
/**
 * main - sum the ascii value of a string
 * Return: Always 0 .
 */

int main(void)
{
	int sum = 0;

	char name[20];

	int i = 0;

	printf("Enter a name: \n");
	scanf("%s", name);

	while (name[i] != '\0')
	{

		printf("The ascii value of the character %c is %d\n", name[i], name[i]);
		sum = sum + name[i];
		i++;

	}

	printf("Sum of the ascii value of a string is : %d\n", sum);

	return (0);
}
