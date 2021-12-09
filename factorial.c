#include<stdio.h>
int main()
{
    int a,b=1,c,d,i;
    printf("Enter the Number :-");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Factorial cannot be negative!!");
    }
    else
    {
        for ( i = 1; i<=a; i++)
        {
            d=b*i;
            b=d;
        }
        printf("Factorial of %d! is :-- %d",a,d);
    }
    
    
}