#include<stdio.h>
int main()
{
    int p, q, r ,md ;
    printf("Enter 1 number: ");
    scanf("%d,", &p);
    printf("Enter 1 number: ");
    scanf("%d,", &q);
    printf("Enter 1 number: ");
    scanf("%d,", &r);
    md= p>q?((p>r)?p:r):((q>r)?q:r);
    printf("biggest number is: %d", md);
    return 0;
}