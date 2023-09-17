#include <stdio.h>

int count_even(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			count++;
	}
	return count;
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);

	printf("%i\n", count_even(a, n));
}
