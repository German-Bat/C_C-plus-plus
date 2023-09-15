#include <stdio.h>
int main()
{
	int a[1000];
	int n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);

	int val, ind;
	scanf("%i %i", &val, &ind);
	for (int i = n; i > (ind + 1); i--)
		a[i] = a[i - 1];
	a[ind + 1] = val;

	n++;
	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);
	printf("\n");
}