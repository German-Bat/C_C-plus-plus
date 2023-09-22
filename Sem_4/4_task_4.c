#include <stdio.h>
#include <math.h>
#define PI 3.1415

unsigned long long fact(int n)
{
	unsigned long long result = 1;
	for (int i = 1; i <= n; ++i)
		result *= i;
	return result;
}

double divid(int n)
{
	if (n % 2 == 0)
		return pow(2, n) / (pow(PI, n / 2) / fact(n / 2));
	else
		return pow(2, n) / ((2 * fact((n - 1) / 2) * pow(4 * PI, (n - 1) / 2)) / fact(n));
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%lf\n", divid(n));
}