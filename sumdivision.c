#include<stdio.h>
int main()
{
    int i, sum =0;
    printf("Number between 100 and 200,divisible by 3 and 5 are : \n");
    for ( i = 101; i < 200; i++)
    {
        if (i%3==0&& i%5==0)
        {
            printf("%d ",i);
            sum+=i;
           
        }
    }
    printf("\nThe Sum is :%d",sum);
    return 0;      
}