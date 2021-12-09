#include<stdio.h>
int main()
{
    long int a,d;
    int b,c;
    b=0;
    printf("Enter The NUmber :- ");
    scanf("%ld",&a);
    
    for (a ; a == 1  ; a/10)
    {
        b=b+1;
        c=b;
    }
    printf("%d",c);
    
}