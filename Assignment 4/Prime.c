#include<stdio.h>
int main()
{ 
    int flag = 0 ;
    for (int n=2; n<=100;n++){
 flag =0;
   for (int i=2; i<n;i++){
    if(n%i==0){
        flag=1;
        break;
    }
   }
if(flag==0)
    printf("%d \n",n);
    
}


    return 0;
}