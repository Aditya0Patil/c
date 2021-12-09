#include<stdio.h>
int main()
{
    int i ,j,r;
    printf("Enter The Number:---");
    scanf("%d",&r);

    for ( i = 0; i <=r; i++)
    {   
        for ( j = 0; j < r-i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
    
}
/*
******
*****
***
**
*
*/