#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char elem;
	scanf("%c", &elem);
	char a = 'a', A = 'A', z = 'z', Z = 'Z';

	if ((elem >= A) && (elem <= Z))
		printf("%i\n", elem - A + 1);
	else if ((elem >= a) && (elem <= z))
		printf("%i\n", elem - a + 1);
	else
		printf("%s\n", "Not a letter"); 
}
