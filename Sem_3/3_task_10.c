#include <stdio.h>

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

int factorials(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = fact(a[i]);
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);
	
	factorials(a, n);
	
	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);
}
