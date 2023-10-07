#include <stdio.h>

void sort(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1); j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);
	
	sort(a, n);
	
	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);
}
