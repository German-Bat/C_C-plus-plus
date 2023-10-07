#include <stdio.h>
int main()
{
	int a[1000];
	int n;
	scanf("%i", &n);
	
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);

	int i = 0, j = (n - 1), c;
	
	while (i < j) 
	{
		if ((a[i] % 2) == 1)
			i++;
		else
			{
				if ((a[j] % 2) == 1)
					{
						c = a[i];
						a[i] = a[j];
						a[j] = c;
						
						i++;
					}
			j--;
			} 
	}

	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);
	printf("\n");
}
