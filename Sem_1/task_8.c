#include <stdio.h>
#include <limits.h>
int main()
{
	int a, b, n;
	scanf("%i %i %i", &a, &b, &n);
	for (int i = 1; i <= (b / n); i++)
		printf("%i ", n * i);
	printf("\n");
}