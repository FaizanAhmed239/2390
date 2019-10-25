#include <stdio.h>
#include <stdlib.h>

/*
This program takes input from the user and checks if it is a prime number or not.
A sentinel controlled loop is being used to control number of inputs if input is -1 or input is less than 0
*/

int main()
{
    int num=0;

    while(num!= -1)
    {
        printf("Enter a number: \n");
        scanf("%d" ,&num);

    if  ((num == -1)|(num<0))
    {
        printf("Wrong entry!Program Terminated!");
    }
    else if(((num%2!=0) && (num%3!=0) && (num%5!=0) && (num%7!=0) && (num%11!=0)))
    {
        printf("\n%d is a prime number!\n", num);
    }
    else if((num==2)|(num==3)|(num==5)|(num==7)|(num==11))
    {
         printf("\n%d is a prime number!\n", num);
    }
    else
    {
        printf("\n%d is not a prime number!\n", num);
    }
    }
    return 0;


}
