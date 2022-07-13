#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int num;

	printf("Enter an integer: \n");
	scanf("%d", &num);

	/* true if number is divisible by 2 */
	if (num % 2 == 0)
		printf("%d is Even number.\n", num);
	else
		printf("%d is Odd number\n.", num);
	return (0);
}
