#include<stdio.h>
int main()
{
int arr[5]  ;
printf("print elements of array\t");
for(int i=0;i<5; i++){

scanf("%d",&arr[i]);
        if(arr[i]%2==0){
           printf("%d is even number ",arr[i]); 
        }
        else{
            printf("%d is odd number",arr[i]);
        }
    }
    
    return 0;
}