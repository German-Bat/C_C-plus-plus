#include <stdio.h>

int print_binary(int a)
{
	if (a != 0)
	{
		print_binary(a / 2);
		printf("%i", a % 2);
	}
}

int main()
{
	int a;
	scanf("%i", &a);
	if (a == 0)
		printf("%i\n", 0);
	else
		print_binary(a);
}
