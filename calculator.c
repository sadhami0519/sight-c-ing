#include <stdio.h>

//For the usage of Windows-specific sleep operations
#include <windows.h>

int sum, diff, product, quotient, rem, op;
int num1, num2;

//Add operation
int add(int a, int b) 
{
    sum = a + b; 
    return sum;
}

//Subtract operation
int subtract(int a, int b) 
{
    diff = (a > b)?(a - b):(b - a);
    return diff;
}

//Multiply operation
int multiply(int a,  int b) 
{
    product = a * b;
    return product;
}

//Finding the Quotient operation
double divide_q(double a, double b) 
{
    quotient = a / b;
    return quotient;
}

//Finding the Remainder operation
int divide_r(int a, int b) 
{
    rem = a % b;
    return rem;
}

void int_ops() 
{
    printf("\nEnter two integer numbers: ");
    scanf("%d %d", &num1, &num2);
}

//Initial Calculator Presentation
void decorate_first() 
{
    int count = 0; //Local variables are assigned garbage values by DEFAULT
    printf("\n-- CALCULATOR --\n\n");
    printf("   Loading");
    do 
    {
        printf(".");
        Sleep(700);
        count++;
    } while (count != 3);
}

void decorate_second() 
{
    printf("   ");
    printf("\n\nSelect a number from the following: \n");
    printf("   ");
    printf("1. Add (+)\n   ");
    printf("2. Subtract (-)\n   ");
    printf("3. Multiply (*)\n   ");
    printf("4. Find Quotient (/)\n   ");
    printf("4. Find Remainder\n   ");
    printf("   Enter: ");
    scanf("%d", &op);

    switch (op) 
    {
        case 1: 
            int_ops();
            add(num1, num2);
            printf("%d", sum);
            break;

        case 2: 
            int_ops();
            subtract(num1, num2);
            printf("%d", diff);
            break;

        case 3: 
            int_ops();
            multiply(num1, num2);
            printf("%d", quotient);
            break;

        case 4:
            printf("\nEnter two double numbers: ");
            scanf("%d %d", &num1, &num2);
            divide_q(num1, num2);
            printf("%lf", quotient);
            break;

        case 5:
            int ops();
            divide_r(num1, num2);
            printf("%lf", rem);
            break;

        default:
            printf("Please enter a number between 1-5");
    }
}

int main() 
{

    decorate_first();
    decorate_second();

    return 0;

}