#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 1000000


int get_number(char elem)
{
	char a = 'a', A = 'A', z = 'z', Z = 'Z';

	if ((elem >= A) && (elem <= Z))
		return elem - A + 1;

	else if ((elem >= a) && (elem <= z))
		return elem - a + 1;
}

char encrypt(char elem, int k)
{
	char a = 'a', A = 'A', z = 'z', Z = 'Z';
	if (((elem >= A) && (elem <= Z)) || ((elem >= a) && (elem <= z)))
		elem = elem + k - (26 * ((k + get_number(elem) - 1) / 26));
	
	return elem;
}

void read_file_to_string(const char filename[], char str[])
{
    FILE* f = fopen(filename, "r");
    int i = 0;

    while (1)
    {
        int c = fgetc(f);
        if (c == EOF)
            break;

        str[i] = (char)c;

        i += 1;
    }
    str[i] = '\0';

    fclose(f);
}

void save_string_to_file(const char filename[], const char str[])
{
    FILE* f = fopen(filename, "w");
    
    fprintf(f, "%s", str);

    fclose(f);
}

int main(int argc, char *argv[])
{

	char infile[100], outfile[100];
	int k;
	sscanf(argv[1], "%s", &infile);
    sscanf(argv[2], "%s", &outfile);
    sscanf(argv[3], "%i", &k);

	char str[BUFFER_SIZE];
    read_file_to_string(infile, str);

    int size = strlen(str);

	for (int i = 0; i < size; i++)
		str[i] = encrypt(str[i], k);

    save_string_to_file(outfile, str);

}

