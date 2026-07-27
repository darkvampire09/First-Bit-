#include<stdio.h>
void prime(int* arr);

int main()
{
        int arr[5];
        prime(arr);


  

    return 0;
}// main ends 
void prime(int* arr){
      printf("Enter 5 elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");

    for(int i = 0; i < 5; i++)
    {
        int flag = 0;
        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", arr[i]);
        }
    }

}