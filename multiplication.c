#include<stdio.h>
int main()
{
    float one, two ,multiplication;
    printf("Enter First Number :- ");
    scanf("%f",&one);
    printf("Enter Second Number:- ");
    scanf("%f",&two);
    multiplication = one * two;
    printf("Multiplication of two numbers is :- %0.2f",multiplication);
    return 0;
}