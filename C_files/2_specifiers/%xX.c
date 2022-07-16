#include <stdio.h>
/**
 * main - x displays lower case hexa, X displays upper
 * Return: Always 0 .
 */

int main(void)
{
	int y = 0XB;

	printf("Hexa value of y is : %x\n", y);
	printf("Hexa value of y is : %X\n", y);
	printf("Integer value of y is : %d\n", y);

	return (0);

}

