#include <stdio.h>
int main()
{
	int n;
	int a[1000], b[1000], ans[1000];
	scanf("%i", &n);
	
	for (int i = 0; i < (n * n); ++i)
		scanf("%i", &a[i]);

	printf("\n");

	for (int i = 0; i < (n * n); ++i)
		scanf("%i", &b[i]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				ans[i * n + j] += a[i * n + k] * b[j + k * n];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%i ", ans[i * n + j]);
		printf("\n");
	}
}
