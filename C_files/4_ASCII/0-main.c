#include <stdio.h>
/**
 * main - displays ascii vaue of a char variable
 * Return: Always 0 .
 */

int main(void)
{
	char i; /*variable diclaration*/

	printf("Enter a character\n");
	scanf("%c", &i);
	printf("The ascii value of i variable is : %d\n", i);

	return (0);
}
