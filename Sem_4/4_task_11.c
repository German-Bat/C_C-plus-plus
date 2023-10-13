#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numbers[6] = {4, 8, 15, 16, 23, 42};
	int* p = &numbers[3];

	FILE* f = fopen("4_task_11.txt", "w");
    
	fprintf(f, "%i\n", numbers[5]);
	fprintf(f, "%i\n", *p);
	fprintf(f, "%i\n", *(p + 1));
	fprintf(f, "%i\n", *(p - 2));
	fprintf(f, "%i\n", p[0]);
	fprintf(f, "%i\n", p[1]);
	fprintf(f, "%i\n", p[-2]);
	fprintf(f, "%i\n", *numbers);
	fprintf(f, "%i\n", *(numbers + 5));
	fprintf(f, "%i\n", p - numbers);
	fprintf(f, "%i\n", (short*)p - (short*)numbers);
	fprintf(f, "%i\n", (char*)p - (char*)numbers);

	fclose(f);
}
