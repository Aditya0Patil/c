#include<stdio.h>
#include<math.h>
int main()
{
    float emi , numerator, denominator ,pri;
    float r,a,n;
    //Principal
    printf("Enter thr Principal amount of EMI :--");
    scanf("%f",&pri);
    //Rate
    printf("\nEntwe the Rate Of the EMI:--");
    scanf("%f",&r);
    //Time
    printf("\nEnter the Duration of the EMI :--");
    scanf("%f", &n);
    //calculations
    numerator = pri*r*pow((1+r),n);
    denominator = pow((1+r),n) - 1;
    emi = numerator/denominator;
    //
    printf("The EMI is :-- %0.2f",emi);
}


