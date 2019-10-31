#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
This program finds quadratic roots.
It is using a void function function which means, NO RETURN STATEMENT!
The program implements the use of pointers, and how to use them to return a value from a function without return statement.
It doesn't check the discriminant.
Further improvements would be available in future!
*/

void find_quadratic_roots(int a, int b, int c, double *q, double *w);

int main()
{
    int a=0, b=0, c=0;
    double root1, root2;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);
    printf("Enter the value of b: \n");
    scanf("%d" , &b);
    printf("Enter the value of c: \n");
    scanf("%d" , &c);

    find_quadratic_roots(a,b,c, &root1, &root2);

    printf("Root1: %lf", root1);
    printf("\nRoot2: %lf", root2);

    return 0;
}
void find_quadratic_roots(int a1, int b1, int c1, double *r1, double *r2)
{
    int disc = 0, denum = 0;
    double sqr = 0;

    disc = ((pow(b1, 2)) - (4* a1 * c1));
    denum = 2 * a1;
    sqr = sqrt(disc);
    *r1 = (((-b1) + sqr))/(denum);
    *r2 = (((-b1) - sqr))/(denum);

}
