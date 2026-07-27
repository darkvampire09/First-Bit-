#include<stdio.h>
void  main()
{
int arr[5]= {1,2, 3, 4,5} ;
int brr[5]={10,20,30, 40, 50} ;
int crr[5];
int k=0;
for(int i=0 ; i<5; i++){
    for ( int j=0 ; j<5;j++){
        if(arr[i]==arr[j]){
           
            crr[k]=arr[i]+brr[j];
        printf("%d \n",crr[k]);
            
        }
    }

}

}