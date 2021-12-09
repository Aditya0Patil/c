#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    printf("Table of:-");
    scanf("%d",&a);
    for ( i = 0; i <=10; i++)
    {
        c=a*i;
        printf("%d x %d  = %d\n",a,i,c);
    }
    
    

}