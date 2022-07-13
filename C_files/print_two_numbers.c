#include <stdio.h>
/**
 * main - sum of two numbers
 * Description: sum of two numbers
 * Return: Always 0 .
 */
int main(void)
{
	int x = 0, y = 0, result = 0;

	printf("Enter a number:");
	scanf("%d", &x);
	printf("Enter second number:");
	scanf("%d", &y);

	result = x + y;

	printf("Sum of two numbers is :%d", result);

	return (0);
}
