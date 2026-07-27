#include<stdio.h>
int main()
{
int arr[5];
printf("Enter the elements of array ");
 int max=arr[0];
int min=arr[0];
for (int i=0 ; i<5 ;i++)
{ 
    scanf("%d",&arr[i]);
   
  if (arr[i]>max){
     max=arr[i];
    }  
 if(arr[i] < min){
     min=arr[i];
    
}

}
 printf("%d is max\n",max);
 printf("%d is min",min);
}