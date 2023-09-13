#include <stdio.h>
#include <limits.h>
int main()
{
	int a, b, n, ans, max_L = 0;
	scanf("%i %i", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int L = 1;
	n = i;
	while (n > 1)
		{
			if (n % 2 == 1)
				n = 3 * n + 1;
			else
				n = n / 2;
			L++;
		}
	if (L > max_L)
		{
		max_L = L;
		ans = i;
		}
	}
	printf("%i %i\n", ans, max_L);


}