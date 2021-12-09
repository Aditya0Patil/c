
#include<stdio.h>

int main()
{
int c,n,n1,d, i=1, sum= 0,p,q,r;

    printf("Press 1 to check if the number is pallindrome or not--\nPress 2 to print Finonacci Seauence--\nPress 3 to find the sum of integers between 100 to 200 which are divisible by 3 and 5--\n");

    scanf("%d",&c);

    switch(c)
    {
        case 1:

        printf("Enter a number to check if it is pallindrome or not :");
        scanf("%d",&n);
        n1=n;
        while(n!=0)
        {

        d=n%10;
        sum= sum*10 + d;
        n=n/10;

        }
        if (n1== sum)
        {
            printf("t'was a pallindrome\n");

        }
else
        {
            printf("t'was not a pallindrome\n");
        }
        break;

                    case 2:

            printf("Enter a number you want to limit the fibonacci sequence to: ");
            scanf("%d",&n);
            n1=n;
            q=0;
            r=1;
            s=q+r;
            do
        {   
        i++;
    
        q=r;
        r=p;
        p=q+r;
        }
        while(i<=n);
        printf("%d\n",p);

        break;

        case 3:
        printf("To find the sum of the integers between 100 and 200 which are divisible\n");
        sum=0;
        for(i=100;i<=200;i++)
        {   
            if(i%3==0 && i%5==0)
            {
                sum= sum + i;
            }
        }
        printf("%d", sum);


        break;

        default:
        printf("Wrong input");
        break;
    }
    return 0;
}