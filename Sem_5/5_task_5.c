#include <stdio.h>

int main()
{
	char str[100];
	scanf("%[^\n]", str);

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			str[i] = '\n';
	}
	
	printf("%s\n", str);
}