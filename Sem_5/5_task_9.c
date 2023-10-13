#include <stdio.h>

int longest_word(const char str[], char result[]) 
{
    int max_len = 0, cur_len = 0, start = 0, long_start = 0;
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        {
            if (cur_len > max_len) 
            {
                max_len = cur_len;
                long_start = start;
            }
            
            cur_len = 0;
            start = i + 1; 
        }

        else 
            cur_len++;
    }

    if (cur_len > max_len) 
        {
            max_len = cur_len;
            long_start = start;
        }
    
    for (int i = 0; i < max_len; i++) 
        result[i] = str[long_start + i];
    
    return max_len;
}

int main() {
    char str[100];
    scanf("%[^\n]", str);
    char result[100];
    int length = longest_word(str, result);
    
    printf("%i\n", length);
    printf("%s\n", result);
}
