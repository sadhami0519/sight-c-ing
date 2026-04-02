// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count; 

int count_digits(int num) {
    
    while(num != 0) {
        count++; 
        num = num / 10;
    }
    
    return count;
    
}

int main() {
    int num, sum_digits = 0, digit_count;
    int alt_num;
    
    printf("---ARMSTRONG NUMBER CHECKING---\n");
    
    printf("Enter a number: ");
    scanf("%d", &num);
    alt_num = num;
    digit_count = count_digits(num);
    
    while (num != 0) {
        if (num > 0 && num < 10) {
            sum_digits += pow(num, digit_count);
        }
        else {
            int mod = num % 10;
            if (mod == 0) {
                continue;
            }
            sum_digits += pow(mod, digit_count);
        }
        num = num / 10;
    }
    
    if (alt_num == sum_digits) {
        printf("It is an Armstrong Number.");
        exit(0);
    }
    printf("It is not an Armstrong Number.");
    
}
