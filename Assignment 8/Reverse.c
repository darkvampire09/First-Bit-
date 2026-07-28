#include<stdio.h>
void Rev(int* arr , int temp);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int temp;
 Rev(arr, temp);
    return 0;
}// main ends here 
void Rev(int* arr , int temp){
     int n = 5;

    for(int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reversed array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


}