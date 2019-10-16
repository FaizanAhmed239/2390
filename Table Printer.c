#include <stdio.h>
#include <stdlib.h>

/*
This program asks the user that from where they want to start the table and where to end
It also inputs the number for which you want the table
it provides a formatted output like:
5 x 1 = 5
5 x 2 = 10
etc
*/

int main()
{
    int n1,n2,X,ans;
    printf("Which No's table do you want?: ");
    scanf("%d", &X);
    printf("Start: ");
    scanf("%d", &n1);
    printf("End: ");
    scanf("%d", &n2);

    while(n1 <= n2)
    {
        ans = X * n1;
        printf("%d x %d = %d\n", X,n1,ans);
        n1++;
    }

    return 0;
}
