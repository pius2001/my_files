#include <stdio.h>

int main(void)
{
	float lenght, width, area, perimeter;

	printf("Enter lenght of rectangle : \n");
	scanf("%f", &lenght);
	printf("Enter width of recatngle : \n");
	scanf("%f", &width);

	area = lenght * width;
	perimeter = 2 * (lenght + width);

	printf("\nArea of rectangle is : %f", area);
	printf("\nPerimeter of rectangle is : %f", perimeter);

	return (0);
}

