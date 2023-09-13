#include <stdio.h>
#include <limits.h>
int main()
{
	int n;  
	scanf("%i", &n);
	if (n == 1)
		printf("Equal\n");	
	else if (n == 2)
	{
		int a, b;
		scanf("%i %i", &a, &b);
		if (a == b)
			printf("Equal\n");
		else if (a > b)
			printf("Decreasing\n");
		else
			printf("Increasing\n");
	}
	else if (n > 2)
	{
		int a, b, c, counter = 3, flag = 1;
		scanf("%i %i %i", &a, &b, &c);

		if (n > 3)
			{
				while (counter < n && (((a == b) && (b == c)) || ((a > b) && (b > c)) || ((a < b) && (b < c))))
				{
					a = b;
					b = c;
					scanf("%i", &c);
					counter++;
				}
				if (counter != n)
					flag = 0;

			}
		if (flag == 0)
			printf("None\n");
		else if ((a == b) && (b == c))
			printf("Equal\n");
		else if ((a > b) && (b > c))
			printf("Decreasing\n");
		else if ((a < b) && (b < c))
			printf("Increasing\n");
		else 
			printf("None\n");
	}
}
