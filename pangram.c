#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int str_length(char s[]) {
    int count;
    
    for(count = 0; s[count] != '\0'; count++);
    
    return count;
}

int main() {
    int alpha_freq[26] = {0};
    char str[1000];
    
    printf("---PANGRAM CHECKING---");
    printf("\nEnter a string: ");
    
    //using scanf for a string stops if there's a space - BAD IDEA. 
    fgets(str, sizeof(str), stdin);
    
    int len = str_length(str);
    
    for(int i = 0; i < len; i++) 
    {
        str[i] = tolower(str[i]);
        if (str[i] >= 97 && str[i] <= 122) 
        {
            if (alpha_freq[str[i] - 97] == 0) 
            {
                alpha_freq[str[i] - 97]++;
            }
        }
    }
    
    for(int i = 0; i < 26; i++) 
    {
        if (alpha_freq[i] != 1) 
        {
            printf("Given string is not a pangram");
            exit(0);
        }
    }
    
    printf("Given string is a pangram");
    return 0;
    
}
