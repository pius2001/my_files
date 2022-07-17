#include <stdio.h>
#include <stdbool.h>
/**
 * main - bool type array
 * Return: Always 0 .
 */

int main(void)
{
	bool i[2] = {true,false};

	for(int x = 0; x < 2; x++)
	{

		printf("%d,\n", i[x]);

	}

	return (0);
}
