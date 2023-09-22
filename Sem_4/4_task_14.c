#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
	double eps = pow(10, -10), D;
	D = b * b - 4 * a * c;
	if (D > eps)
	{
		px1[0] = (-b + sqrt(D)) / (2 * a);
		px2[0] = (-b - sqrt(D)) / (2 * a);
		return 2;
	}
	else if (D < eps)
		return 0;
	else
	{
		px1[0] = (-b) / (2 * a);
	}
}

int main()
{
	double a, b, c, ans1, ans2;
	double* px1 = &ans1;
	double* px2 = &ans2;
	scanf("%lf %lf %lf", &a, &b, &c);
	solve_quadratic(a, b, c, px1, px2);
	printf("%lf %lf\n", ans1, ans2);
}