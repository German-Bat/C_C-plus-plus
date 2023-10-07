#include <stdio.h>

void reverse(int a[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp = a[i];
		
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}

}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	
	for (int i = 0; i < n; ++i)	
		scanf("%i", &a[i]);
	
	reverse(a, n);
	
	for (int i = 0; i < n; ++i)
		printf("%i ", a[i]);
}
