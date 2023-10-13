#include <stdio.h>
#include <string.h>


int main()
{
	char a[100], b[100];
	scanf("%s %s", a, b);

	int i = 0;

	while (a[i] && b[i])
	{
		printf("%c", a[i]);
		printf("%c", b[i]);

		i++;
	}

	while (a[i])
	{
		printf("%c", a[i]);

		i++;
	}
	while (b[i])
	{
		printf("%c", b[i]);

		i++;
	}
	
	printf("\n");
}
