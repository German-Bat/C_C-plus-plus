#include <stdio.h>

int print_even(int a, int b)
{
	if (a % 2)
		a++;
	for (int i = a; i <= b; i += 2)
		printf("%i ", i);
}

int main()
{
	int a, b;
	scanf("%i %i", &a, &b);
	print_even(a, b);
	printf("\n");

}
