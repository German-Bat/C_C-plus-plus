#include <stdio.h>

int main()
{
	char str[100];
	scanf("%[^\n]", str);

	int counter = 0, i = 0;

	while ((str[i]) && counter > -1)
		{
			if (str[i] == '(')
				counter++;

			else
				counter--;

			i++;
		}

	if (counter == 0)
		printf("YES\n");
	
	else
		printf("NO\n");
}