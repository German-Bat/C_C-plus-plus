#include <stdio.h>

float yearfrac(int y, float d)
{
	return d / (365 + (y % 4 == 0));
}

int main()
{
	int n, k;
	scanf("%i %i", &n, &k);
	printf("%f\n", yearfrac(n, k));
}