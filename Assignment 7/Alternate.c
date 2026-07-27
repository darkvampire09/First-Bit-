#include<stdio.h>
void  main()
{ int arr[5];
printf("enter elements \n ");
for(int i=0 ; i<5 ;i++){
    scanf("%d",&arr[i]);
printf("Alt is %d \t\n",arr[i]+2);
}
}