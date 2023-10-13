#include <stdio.h>
#include <string.h>

int main()
{
	int n, x = 0, y = 0;
	scanf("%i", &n);

	for (int i = 0; i < n; i++)
	{
		char way[6];
		int steps;
		scanf("%s %i", way, &steps);

		if (strcmp(way, "North") == 0)
			y += steps;
		else if (strcmp(way, "East") == 0)
			x += steps;
		else if (strcmp(way, "South") == 0)
			y -= steps;
		else
			x -= steps;
	}

	printf("%i %i\n", x, y);
}