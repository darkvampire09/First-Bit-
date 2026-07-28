#include<stdio.h>
void maximum(int* arr);
void minimum(int* arr);

int main()
{
int arr[10];
printf("Enter the elements of array ");

for (int i=0 ; i<5 ;i++)
{ 
    scanf("%d",&arr[i]);
    }
maximum(arr);
minimum(arr);

}// main ends 
void maximum(int* arr){
        int max=arr[0];
for (int i=0 ; i<5 ;i++)
{ 
   
  if (arr[i]>max){
     max=arr[i];
    }  
}
 printf("%d is max\n",max);
  }


  void minimum(int* arr){
      int min=arr[0];
for (int i=0 ; i<5 ;i++)
{ 
   
  if (arr[i]<min){
     min=arr[i];
    }  
}
 printf("%d is min\n",min);

  }