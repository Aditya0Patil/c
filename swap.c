#include<stdio.h>
int main()
{
    int frist, second,a;
    printf("first = ");
    scanf("%d",&frist);
    printf("Second = ");
    scanf("%d",&second);
    a = frist;
    frist=second;
    second = a;
    printf("First = %d\n",frist);
    printf("Second = %d",second);
    return 0;



}