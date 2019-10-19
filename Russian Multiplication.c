#include <stdio.h>
#include <stdlib.h>

/*
Problem Name: Russian multiplication
Problem Statement.
Given two numbers multiply them using the following method.
Successively divide the smaller number by 2 (ignore any remainder) until the quotient is 1 and multiple the larger number by 2.
Add to a total only those multiples of the larger which correspond to an odd quotient of the smaller.
*/

int main()
{
    int n1=0, n2=0, x=0, y=0, odd=0;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    if(n1>n2)
    {
        y = n2;
        x = n1;
    }
    else if(n2>n1)
    {
        y = n1;
        x = n2;
    }
    else
    {
        x = n1;
        y = n2;
    }


    do
    {
        printf("%d                   %d\n", y, x);
            if (y%2!=0)
            {
               odd = odd + x;
            }
            y = y / 2;
            x = x * 2;
    } while(y>0);

    printf("\nTotal is: %d", odd);
    return 0;
}


