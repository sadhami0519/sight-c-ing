#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int num = 0, user_input, count = 0, n;
    srand(time(NULL));
    for (int i = 0; i < 1; i++) 
    {
        num += rand() % 100 + 1;
    }   
    printf("%d\n", num);
    
    do 
    {
        printf("Guess: ");
        scanf("%d", &user_input);
        if (user_input == num) 
        {
            printf("That's right! %d was the secret number.", num);
            break;
        }
        else 
        {
            printf("Wrong! Guess again.");
            count++;
        }
    } while (count != 2);
    
    return 0;
}