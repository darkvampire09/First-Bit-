#include<stdio.h>
int main()
{
int arr[5],sum=0;
printf("Enter the array elements");
for (int i =0;i<5;i++){
    scanf ("%d",&arr[i]);
    sum =sum+arr[i];
    
}
printf(" sum is %d",sum);
}