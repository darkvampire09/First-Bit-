#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

for (int n=1; n<=1000 ; n++){
    temp = n;
     sum = 0;
    while (temp != 0) {
        
        digit = temp % 10; 

        int fact = 1, i = 1;
        while (i <= digit) {
          
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is Strong Number \n",n);
  
}

    return 0;
}