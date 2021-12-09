#include<stdio.h>
int main()
{
    int i,k,r,a;
    printf("ENTER THE NUMBER FO ROWS :----");
    scanf("%d",&r);
    a=r+1;

    for ( i = 0; i < a; i++)
    {
        for ( k= 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
return 0;    
}



/*
*
**
***
****
*****
*/