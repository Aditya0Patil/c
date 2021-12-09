#include<stdio.h>
int main()
{
    float one,two,sum;
    printf("Enter First Number :-");
    scanf("%f",&one);
    printf("Enter Second Number :-");
    scanf("%f",&two);
    sum = one + two;
    printf("Sum of the two numbers is :-%.2f",sum);
    return 0;

}