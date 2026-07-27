#include<stdio.h>
int main()
{
int arr[5];
int search=3;


printf("enter elements ");
for(int  i=0 ; i<5 ;i++){
    scanf("%d",&arr[i]);
}
    for(int i=0; i<5 ;i++){
        if(arr[i]==search){
        printf("found at index %d",i);
    break;
        }
}

}