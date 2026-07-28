#include<stdio.h>
void add(int*arr,int sum);
int main()
{
int arr[5],sum=0;
add(arr,sum);

}   // main ends here
void add(int* arr , int sum ){

    printf("Enter the array elements ");
for (int i =0;i<5;i++){
    scanf ("%d",&arr[i]);
    sum =sum+arr[i];
    printf(" sum is %d ",sum);
    
}
}