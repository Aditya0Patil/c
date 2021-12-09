#include<stdio.h>
int main()
{
    int n , r , rev=0 ,t;
    printf("Enter the number:--");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n = n/10;

    }
    if (t==rev)
    {
        printf("\nThe Number is a palendrome number");
    }
    else
    {
        printf("\nThe Number is not a palendrome number");
    }
    
    
}