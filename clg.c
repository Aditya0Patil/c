#include <stdio.h>
#include<stdlib.h>
#define PI 3.141  
int main()
{
    system("cls");
    float diagonal1, diagonal2;
    float area;
    float radius, cir; 
 
    printf("Enter 1st diagonal of the given rhombus: \n ");
    scanf("%f", &diagonal1);
    printf("Enter 2nd diagonal of the given rhombus: \n ");

    scanf("%f", &diagonal2);
    

    area = 0.5 * diagonal1 * diagonal2;
    printf("Area of rhombus is: %.3f \n", area);
    
    printf("Enter radius of circle\n");  
    scanf("%f", &radius);  
    cir = PI * 2 * radius;  
    printf("circumference of circle : %.3f \n", cir);  
      
    return 0;  
    
}
