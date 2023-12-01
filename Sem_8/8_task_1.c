#include <stdio.h>
#include <stdlib.h>

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
    long long* p = (long long*)error_checked_malloc(sizeof(long long));

    long long arg;
    scanf("%lli", &arg);
    
    *p = arg;

    printf("%lli\n", *p);

    free(p);
}