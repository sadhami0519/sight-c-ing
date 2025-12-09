#include <stdio.h>
#include <windows.h>

int sum, diff, product, quotient, remainder;

void add(int a, int b) 
{
    sum = a + b; 
    return sum;
}

void subtract(int a, int b) 
{
    diff = (a > b)?(a - b):(b - a);
    return diff;
}

void multiply(int a,  int b) 
{
    product = a * b;
    return product;
}

void divide_q(double a, double b) 
{
    quotient = a / b;
    return quotient;
}

void divide_r(int a, int b) 
{
    remainder = a % b;
    return remainder;
}


int main() {

    printf("<-- C A L C U L A T O R ");
    


    return 0;

}