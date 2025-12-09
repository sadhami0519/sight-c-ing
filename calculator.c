#include <stdio.h>
#include <windows.h>

int sum, diff, product, quotient, rem;

int add(int a, int b) 
{
    sum = a + b; 
    return sum;
}

int subtract(int a, int b) 
{
    diff = (a > b)?(a - b):(b - a);
    return diff;
}

int multiply(int a,  int b) 
{
    product = a * b;
    return product;
}

double divide_q(double a, double b) 
{
    quotient = a / b;
    return quotient;
}

int divide_r(int a, int b) 
{
    rem = a % b;
    return rem;
}

void decorate_first() {
    int count = 0; //Local variables are assigned garbage values by DEFAULT
    printf("-- CALCULATOR --\n");
    printf("   Loading");
    do {
        printf(".");
        Sleep(700);
        count++;
    } while (count != 3);
}

int main() {

    decorate_first();

    return 0;

}