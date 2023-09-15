#include <stdio.h>
int main()
{
	int a[1000];
	int n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);

	int ind, b[1000];
	scanf("%i", &ind);
	for (int i = 0; i < n; i++)
		b[(i + ind) % n] = a[i];	
	
	for (int i = 0; i < n; ++i)
		{
		a[i] = b[i];
		printf("%i ", a[i]);
		}
	printf("\n");
}