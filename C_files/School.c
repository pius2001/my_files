#include <stdio.h>

int main()
{	
	int a, b;

	printf("1. East Africa\n");
	printf("2. West Africa\n");
	printf("3. Central Africa\n");
	printf("Choose a Region\n");
	scanf("%d", &a);

	switch (a)
	{
		case 1 :
			printf("Listed countries in East Africa\n");
			printf("1. Kenya\n");
			printf("2. Tanzania\n");
			printf("3. Uganda\n");
			scanf("%d", &b);
			switch (b)
			{
				case 1 :
					printf("You are a kenyan citizen welcome\n");
					break;
				case 2 :
					printf("You are a Tanzania citizen welcome\n");
					break;
				case 3 :
					printf("You are Ugandan citizen welcome\n");
					break;
			}	
			return (0);
		case 2 :
			printf("Listed countries in West Africa\n");
			printf("1. Libya\n");
			printf("2. Nigeria\n");
			printf("3. Ghana\n");
			scanf("%d", &b);
			switch (b)
			{
				case 1 :
					printf("You are Libya citizen welcome\n");
					break;
				case 2 :
					printf("You are a Nigerian citizen welcome\n");
					break;
				case 3 :
					printf("You are Ghana citizen welcome\n");
					break;
			}
			return (0);
		case 3 :
			printf("Listed countries in Central Africa\n");
			printf("1. Mali\n");
			printf("2. Zimbabwe\n");
			printf("3. Chad\n");
			scanf("%d", &b);
			switch (b)
			{
				case 1 :
					printf("You are Mali citizen welcome\n");
					break;
				case 2 :
					printf("You are a Zimbabwe citizen welcome\n");
					break;
				case 3 :
					printf("You are Chad citizen welcome\n");
					break;
				}
				break;
		default :
				printf("Your Choice Does Not Exist❌\n");
			return (0);
	}		

}
