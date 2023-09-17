#include <stdio.h>

int is_even(int n)
{
	return (n + 1) % 2;
}

int main()
{
	printf("%i\n", is_even(90));
	printf("%i\n", is_even(91));
}
