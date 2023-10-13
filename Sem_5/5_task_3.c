#include <stdio.h>
#include <string.h>


int main()
{
	char a[100];
	scanf("%s", a);
	int i = 1;
	
	while (a[i - 1])
	{
		for (int j = 0; j < i; j++)
			printf("%c", a[j]);

		printf("\n");

		i++;
	}
}
