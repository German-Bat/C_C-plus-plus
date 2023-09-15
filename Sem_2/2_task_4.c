#include <stdio.h>
int main()
{
	int a[1000];
	int n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);

	int b, c, counter = 0;
	scanf("%i %i", &b, &c);
	for (int i = 0; i < n; i++)
		{
		if ((i < b) || (i >= c))
			{
				a[counter] = a[i];
				counter++;
			}
		}
	n = counter;

	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);

	printf("\n");
}