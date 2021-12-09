#include<stdio.h>
int main()    
{    int a= 0;
       
    int arr[] = {21, 67, 89, 56, 56, 78, 78,56};     
        
      
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Duplicate elements in given array: \n");    
       
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])  
                a = arr[i] 
                  
        }    
    }   
    printf("%d",a) ;
return 0;        
}  
