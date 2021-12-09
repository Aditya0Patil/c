#include<stdio.h>
int main ()
{
    int i,space,row,k=0,count =0 ,count1=0;
    printf("Enter The Number Of Rows:------");
    scanf("%d",&row);
    for ( i = 1; i <= row; i++)
    {
        for ( space = 1; space <= row -i; ++space)
        {
            printf("  ");
            ++count;
        }
        while (k !=2*i-1)
        {
            if (count<= row-1)
            {
                printf("%d ",i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ",(i+k-2*count1));
            }
            ++k;
        }
        count1 = count =   k = 0;
        printf("\n");
    }
    return 0;
}/*     1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 */