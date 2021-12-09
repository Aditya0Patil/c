#include<stdio.h>
int main()
{
    int i=1,n,a=1,b=1,sum = 0;
    printf("Enter the nth value:\n");
    scanf("%d",&n);
    printf("\nFibbobacci series is \n");
    do
    {
        printf("%d " ,sum);
        a=b;
        b=sum;
        sum=a+b;
        i++;


    } while (i<=n);
return 0;
}