#include<stdio.h>
void  main()
{   int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ch ;
    printf("Enter Your Choice\n 1 : Even Odd \n 2 : Prime Not Prime \n 3 : Palindrome Number \n 4 ; Positive Or Negative Or Zero \n 5 : Reverse Number \n 6 : Sum Of Digits  ");
    scanf("%d",&ch);
   
    switch(ch){

        case 1:  printf("\n");
            if(n%2==0){
                printf("%d is Even number ",n);

            }
            else{
                printf("%d is Odd Number ",n);
            }
    break;

    case 2:printf("\n");
       int  flag = 0;
    if (n <= 1) {
        flag=0 ;
    printf("Not Prime");
    }
    else {
    for(int i=2 ; i<n ; i++) {
            if (n % i == 0) {
            flag = 1;
            break;
            }
            i++;
        }

        if (flag == 0){
            printf("%d is a Prime Number" ,n );
            break;
        }
        if(flag==1){
            printf("%d is Not Prime Number",n );
            break;
        }
    }
    break;
    case 3 : printf("\n");
    int  temp, digit, rev = 0;
    temp = n;
    while (temp != 0) {
    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;
    }

    if (rev == n)
    printf("%d is Palindrome Number",n);
    else
    printf("%d is Not a Palindrome Number",n);
    break ;
    case 4 :  
    if(n==0){
    printf("%d is Zero ",n );
    }
    else if (n>0){
    printf("%d is Positive Number ",n);

    }
    else{
    printf("%d id Negative Number ",n );
    }
    break;
    case 5 : printf("\n");
    printf("The Reverse Number is ");
    while(n!=0){
        int x=0;
        x=n%10;
        printf("%d",x);
        n=n/10;
    }
    
    break;

    case 6 : printf("\n");
    int sum =0 ;
    while(n!=0){
    int x=0;
       
        x=n%10;
        sum=x+sum;
        n=n/10;
    }
    printf(" The Sum is %d",sum);
    break ;
    default: printf("Invalid Choice ");
}
}
   
