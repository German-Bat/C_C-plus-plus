#include <stdio.h>
int main() 
{
     int n;
     scanf("%i", &n);
     for (int i = 0; i <= n; i++)
          printf("%3i -> %3i -> %3i\n", i, i * i, i * i * i);

}