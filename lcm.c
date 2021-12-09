#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    printf("Enter First Number:- ");
    scanf("%d",&a);
    printf("Enter Second Number:- ");
    scanf("%d",&b);
    for ( i = 1; i <=b; i++)
    {
        d=a*i;
        if (d%b==0)
        {
            printf("%d",d);
            break;
        }
        
        
    }
    
}