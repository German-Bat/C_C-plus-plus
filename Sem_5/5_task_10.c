#include <stdio.h>
#include <string.h>

void delete_chars(char str[], char c) 
{
    int i = 0, j = 0;

    while (str[i]) 
    {        
        if (str[i] != c) 
        {
            str[j] = str[i];

            j++;
        }

        i++;
    }

    str[j] = '\0';
}

int main() 
{
    char str[100];
    scanf("%s", str);

    char elem;
    scanf(" %c", &elem);

    delete_chars(str, elem);

    printf("%s\n", str);
}
