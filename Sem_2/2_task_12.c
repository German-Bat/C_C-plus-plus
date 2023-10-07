#include <stdio.h>
int main()
{
	int n, m;
	int a[1000];
	scanf("%i %i", &n, &m);
	
	for (int i = 0; i < (n * m); ++i)
		scanf("%i", &a[i]);
	
	for (int i = 0; i < m; i++)
	{
		int temp;
		
		for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < (n - 1); k++)
				{
					if (a[k * m + i] > (a[(k + 1) * m + i]))
					{
						temp = a[k * m + i];
						a[k * m + i] = a[(k + 1) * m + i];
						a[(k + 1) * m + i] = temp;
					}
				}
			}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%i ", a[i * m + j]);
		printf("\n");
	}
}
