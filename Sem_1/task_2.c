#include <stdio.h>
int main() 
{
     int a, b, c;
     scanf("%i %i %i", &a, &b, &c);
     if (((b == a - 1) && (c == a - 2)) || ((b == a + 1) && (c == a + 2)))
    	     printf("Consecutive ");

     if ((b > a) && (c > b))
         printf("Increasing\n");
    
     else if ((b < a) && (c < b))
    	     printf("Decreasing\n");

     else if ((a == b) && (b == c))
    	     printf("Equal\n");
    
     else
    	     printf("None\n");
}
