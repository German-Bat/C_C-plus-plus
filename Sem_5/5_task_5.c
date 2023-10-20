#include <stdio.h>
#include <string.h>


int main()
{
	char a[100], c[100];
	scanf("%[^\n]", a);
	int len = strlen(a), counter = 0;
	
	a[len] = ' ';
	a[len + 1] = '\0';

	for (int i = 0; a[i]; i++)
	{
		if (a[i] == ' ')
		{
			c[i + counter] = '!';
			counter += 1;
		}
		
		c[i + counter] = a[i];
	}
	
	printf("%s", c);
}
