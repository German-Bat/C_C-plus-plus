#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char elem;
	scanf("%c", &elem);

	char a = 'a', A = 'A', z = 'z', Z = 'Z', zero = '0', nine = '9';

	if ((elem >= A) && (elem <= Z))
		printf("%s\n", "Uppercase Letter");
	else if ((elem >= a) && (elem <= z))
		printf("%s\n", "Lowercase Letter");
	else if ((elem >= zero) && (elem <= nine))
		printf("%s\n", "Digit");
	else
		printf("%s\n", "Other"); 
}
