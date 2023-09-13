#include <stdio.h>
#include <limits.h>
int main()
{
	int n;
	scanf("%i", &n);
	int min_ev = INT_MAX;
	int max_odd = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int a;
		scanf("%i", &a);
		if ((a < min_ev) && (a % 2 == 0))
			min_ev = a;
		if ((a > max_odd) && (a % 2 == 1))
			max_odd = a;
	}

if (min_ev == INT_MAX)
	printf("None ");
else
	printf("%i ", min_ev);

if (max_odd == INT_MIN)
	printf("None\n");
else
	printf("%i\n", max_odd);
}
