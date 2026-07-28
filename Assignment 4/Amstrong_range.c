#include<stdio.h>
#include<math.h>

int main()
{
    int temp, sum, digit, n, count;

    for(n = 1; n <= 1000; n++)
    {
        sum = 0;
        count = 0;

        temp = n;

        while(temp != 0)
        {
            temp = temp / 10;
            count++;
        }

        temp = n;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}