#include<stdio.h>
int main(){
    //CIRCLE
    float rad , circum , area;
    float pi = 3.14;
    float dig1 , dig2 , area_ , peri , side;
    //input
    printf("Area and circumfrence of Circle");
    printf("\nEnter radius:");
    scanf("%f",&rad);
    //formula
    area = pi * rad * rad;
    printf("\nArea of Circle: %f",area);
    circum = 2 * pi * rad;
    printf("\nCircumfrence of Circle: %f",circum);
    //RHOMBUS 

    printf("\nEnter a side of rhombus:");
    scanf("%f",&side);
    printf("\nEnter diagonal 1:");
    scanf("%f", &dig1);

    printf("\nEnter diagonal 2:");
    scanf("%f", &dig2);
    //formula
    peri= side * 4 ;
    area_ = (dig1*dig2)/2;


    printf("\nThe perimeter is: %f", peri);
    printf("\nThe area of rhombus: %f",area_);


    return 0;
}
