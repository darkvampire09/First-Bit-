#include<stdio.h>
void main()
{  printf("Perfect Numbers Are \n");
   for(int i=1; i<=100;i++) {
     int sum=0 ; 
    for(int j=1 ; j<i ; j++){
      if(i%j==0)
      {
        sum = sum + j ; 
      } 
    }
  if(sum==i){
    printf("%d \n",sum);
  }

    }
    }
