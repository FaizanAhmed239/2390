#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
This program checks if a 3-digit number input by the user is a Magic Number or not.
Magic Number* is a 3-digit number which is equal to the sum of the cubes(^3) of each of it's digit,
e.g
153 = (1^3) + (5^3) + (3^3)


*Note: This is not the only definition of Magic Number. Depends upon the type of situation provided!
*/

int main()
{

    int input=0, n1=0, n2=0, n3=0, c1=0, c2=0, c3=0, temp=0;
    printf("Input a 3 digit number: \n");
    scanf("%d", &input);

    temp = input;

    n1 = temp / 100;
    temp = temp % 100;
    n2 = temp / 10;
    temp = temp % 10;
    n3 = temp;

    c1 = n1*n1*n1
    c2 = n2*n2*n2;
    c3 = n3*n3*n3;

    if (input == (c1+c2+c3))
    {
        printf("\n%d is a magic number!", input);
    }
    else
    {
        printf("\n%d is NOT a magic number!", input);
    }
    return 0;
}


























