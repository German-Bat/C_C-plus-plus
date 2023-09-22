#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cube(float* p)
{
	p[0] = p[0] * p[0];
}

int main()
{
	float numbers[6] = {4.0, 8.0, 15.0, 16.0, 23.0, 42.0};
	float* p = &numbers[3];
	cube(p);
	for (int i = 0; i <= 5; i++)
		printf("%f ", numbers[i]);
	printf("\n");
}