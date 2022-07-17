#include <stdio.h>
/**
 * main - we do not use bool type b creating a new name of bool type using typedef
 * Return: Always 0 .
 */

typedef enum{false,true} i;

int main(void)
{
	i x = false;
	if(x == true)
	{

		printf("The value of x is true\n");

	}

	else
	{

		printf("The value of x is false\n");
	}

	return (0);
}
