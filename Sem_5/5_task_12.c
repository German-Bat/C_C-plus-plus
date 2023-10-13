#include <stdio.h>
#include <string.h>

void safe_strcpy(char a[], size_t len, char b[])
{
	if (len > strlen(b))
		strcpy(a, b);

	else
	{
		for (int i = 0; i < len; i++)
			a[i] = b[i];
		
		a[len] = '\0';
	}

	printf("%s\n", a);
}

int main()
{
	char a[10], b[20];
	scanf("%s %s", a, b);

	safe_strcpy(a, (sizeof a) / (sizeof a[0]) - 1, b);
}