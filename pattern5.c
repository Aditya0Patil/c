#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows,k;
    printf("Enter Number Of Rows:--------");
    scanf("%d",&rows);
    int space = rows-1,num=1;
    printf("\n");
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= space; j++)
        {
            printf("  ");}
        for ( k = 1; k <= num; k++)
        {
            printf(" *");}
        if (space >i)
        {
            space = space-1;
            num =num+2;}
        if(space<i)
        {
            space = space + 1;
            num = num -2;}
        printf("\n");
    }
    return 0;
    
}