
#include <stdio.h>

int main() {
    
    int num, count = 0; 
    printf("Enter num: ");
    scanf("%d", &num);
    alt_num = num;
    
    while(num != 0) {
        count++; 
        num = num / 10;
    }
    
    printf("The number of digits are: %d", count);
    
}
