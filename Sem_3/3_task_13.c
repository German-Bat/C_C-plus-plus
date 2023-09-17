#include <stdio.h>

void bob(int n);

void alice(int n)
{
	n = n * 3 + 1;
	printf("Alice:  %i\n", n);
	bob(n);
}

void bob(int n)
{
	if (n == 1)
		printf("\n");
	else if (n % 2 == 1)
		alice(n);
	else
	{
		n /= 2;
		printf("Bob:    %i\n", n);
		bob(n);
	}

}

int main()
{
	int n;
	scanf("%i", &n);
	alice(n);
}
