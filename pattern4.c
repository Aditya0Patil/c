#include<stdio.h>
int main()
{
    int i,j,rows;
    char a = 'A';
    printf("Enter The Number Of Rows:--- ");
    scanf("%d",&rows);

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c",a);
        }
        a++;
        printf("\n");

        
    }
    return 0 ;
    
}