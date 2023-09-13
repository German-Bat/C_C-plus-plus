#include <stdio.h>
#include <limits.h>
int main()
{
	int n, L = 1, max = INT_MIN;
	scanf("%i", &n);
	while (n > 1)
	{
		if (n > max)
			max = n;
		printf("%i ", n);
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n = n / 2;
		L++;
		
	}
	printf("1\n");
	printf("Length = %i, Max = %i\n", L, max);


}