#include <stdio.h>

int trib(int a[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		if (i <= 2)
			a[i] = i / 2;
		else
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	return a[n];

}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	printf("%i\n", trib(a, n));
}
