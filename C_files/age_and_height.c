#include <stdio.h>
int main()
{
	int age;
	double height;

	printf("enter you age: ");
	scanf("%d", &age);

	printf("enter height: ");
	scanf("%lf", &height);

	printf("Age is %d", age);
	printf("\nheight is %.1lf\n", height);

	return (0);
}
