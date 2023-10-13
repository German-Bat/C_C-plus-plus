#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char word[100]; 
    int count;
    sscanf(argv[1], "%s", &word);
    sscanf(argv[2], "%i", &count);

    for (int i = 0; i < count; i++) 
        printf("%s ", word);

    printf("\n");

}