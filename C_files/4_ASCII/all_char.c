#include <stdio.h>
/**
 * main - displays all ascii char
 * Return: Always 0 .
 */

int main(void)
{
	int i;

	for (i = 0; i < 255; i++)
	{

		printf("\n The ascii value of %c is %d", i, i);

	}

	return (0);
}
