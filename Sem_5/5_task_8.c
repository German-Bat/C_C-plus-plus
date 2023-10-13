#include <stdio.h>
#include <stdlib.h>

int get_number(char elem)
{
	char a = 'a', A = 'A', z = 'z', Z = 'Z';

	if ((elem >= A) && (elem <= Z))
		return elem - A + 1;

	else if ((elem >= a) && (elem <= z))
		return elem - a + 1;
}

void encrypt(char* str, int k)
{
	for (int i = 0; str[i]; i++)
	{
		char elem = str[i];

		if (elem != ' ')
		{
			elem = elem + k - (26 * ((k + get_number(elem) - 1) / 26));

			str[i] = elem;
		}
	}
	printf("%s\n", str);
}

int main()
{
	char str[100];
	int k;
	scanf("%i", &k);
	scanf(" %[^\n]", str);

	encrypt(str, k);
}
