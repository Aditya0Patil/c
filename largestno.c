#include<stdio.h>
int main()
{

    int p, q, r,md;
    printf("Enter 1 number: ");
    scanf("%d", &p);
    printf("Enter 1 number: ");
    scanf("%d,", &q);
    printf("Enter 1 number: ");
    scanf("%d,", &r);
    if(p>q)
    {
        printf("%d is the largest number\n", p);
    }
    else if(q>r)
    {
        printf("%d is the largest number\n", q);
    }
    else
    {
        printf("%d is the largest number\n", r);
    }
    return 0;
}