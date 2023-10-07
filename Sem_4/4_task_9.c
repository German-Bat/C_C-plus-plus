#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F1(float x)
{
	return pow(x, 2) - 2;
}

double F2(float x)
{
	return pow(x, 2) - 7;
}

double F3(float x)
{
	return pow(x, 5) + 2 * pow(x, 4) + 5 * pow(x, 2) + 4 * x - 500;
}

double F4(float x)
{
	return exp(x) * logf(x) - 7;
}

int main()
{
	double l, m, h, val, eps = pow(10, -10);
	scanf("%lf %lf", &l, &h);
	
	m = (l + h) / 2;
	val = F4(m);
	
	while ((h - l) > eps)
	{
		if (val > 0)
			h = m;
		else
			l = m;
		
		m = (l + h) / 2;
		val = F4(m);
	}
	
	printf("%lf\n", m);
}
