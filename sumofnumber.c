#include<stdio.h>
int main()
{
    int a , b ,c=0,i,sum;
    printf("Enter the Number :-");
    scanf("%d",&a);
    for ( i = 0; i < a+1; i++)
    {
        
        sum = c+i;
        //printf("%d ",sum);
        c=sum;
        
    }
    printf("sum of all the numbers till %d = %d",a,sum);
    
}