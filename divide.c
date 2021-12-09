#include<stdio.h>
int main()
{
    int first, second ,divide,lol;
    printf("First Number:- ");      
    scanf("%d",&first);
    printf("Second Number:- ");
    scanf("%d",&second);
    divide = first/second;
    lol =  first % second;
    printf("Quotiant = %d\n",divide );
    printf("Remainder = %d\n",lol);
    return 0;



}