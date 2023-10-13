#include <stdio.h>
#include <string.h>

char is_palindrom(const char str[])
{
    int i = 0, k = strlen(str) - 1;

    while (k > i)
    {
        if (str[i] != str[k])
        {
            printf("No\n");
            return 0;
        }    
        
        i++;
        k--;
    }
    printf("Yes\n");
    
    return 0;
}

int main()
{
    char str[100];
    scanf("%s", str);
     
    is_palindrom(str);
}