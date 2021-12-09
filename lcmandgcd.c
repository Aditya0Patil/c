#include<stdio.h>
int main()
{
    int a;
    printf("Press 1 to find GCD \nPress 2 to find LCM\nEnter Your Choice :--- ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    {
    int a ,b ,c ,i,d;
    printf("Enter first number to find GCD:- ");
    scanf("%d",&a);
    printf("Enter second number to find LCM:- ");
    scanf("%d",&b);
    if (a>b)
    {
        c=a;
    }
    else{
        c=b;
    }
    
    for ( i = 1; i <=c; i++)
    {
        if (a%i==0&&b%i==0)
        {
            d=i;        }    
    }
    printf("GCD of two (%d,%d) numbers is :- %d",a,b,d); 
}
        
        break;
    
    case 2:
    {
    int a,b,c,d,i;
    printf("Enter First Number to find LCM :- ");
    scanf("%d",&a);
    printf("Enter Second Number to find LCM :- ");
    scanf("%d",&b);
    for ( i = 1; i <=b; i++)
    {
        d=a*i;
        if (d%b==0)
        {
            printf("LCM of two numbers(%d,%d) is %d",a,b,d);
            break;
        }
        
        
    }
    
}
        break;
    }

}