#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* error_checked_malloc(size_t n)
{
    void* p = malloc(n);
    if (p == NULL)
    {
        printf("Error. Can't allocate memory!\n");
        exit(1);
    }
    return p;
}

int main()
{
    char** p = (char**)malloc(sizeof(char*));
    
    *p = (char*)malloc(sizeof(char) * 100);

    char arg[100];
    scanf("%[^\n]", arg);
    
    strcpy(*p, arg);

    printf("%s\n", *p);

    free(*p);
    free(p);
}