#include<stdio.h>
int main()
{
    int a ,b ,c ,i,d;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    if (a>b)
    {
        c=a;
    }
    else{
        c=b;
    }
    
    for ( i = 1; i <=c; i++)
    {
        if (a%i==0&&b%i==0)
        {
            d=i;        }
            
        
    }
    printf("GCD of two (%d,%d) numbers is :- %d",a,b,d);
    
    
    
    
    
}