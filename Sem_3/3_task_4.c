#include <stdio.h>

int triangle(int a)
{
	for (int i = 1; i <= a; i++)
		{
			for (int j = 0; j < i; j++)
				printf("*");
			
			printf("\n");
		}
}

int main()
{
	int a;
	scanf("%i", &a);
	
	triangle(a);
}
