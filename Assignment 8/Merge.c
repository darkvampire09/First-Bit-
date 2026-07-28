#include <stdio.h>
void merge(int* arr1, int* arr2 , int* arr3);

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[6];

 merge(arr1,arr2,arr3);

    return 0;
}// main ends here 
void  merge(int* arr1, int* arr2 , int* arr3){
       int n1 = 3, n2 = 3;

    
    for(int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

  
    for(int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged Array: ");

    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

}