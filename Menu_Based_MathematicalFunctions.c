#include <stdio.h>
#include <stdlib.h>

/*
Problem Statement. Write a program that inputs 2 numbers (n and r).
After validating the inputs, the program shows the following input menu to the user.

Press 1 for multiplying numbers.
Press 2 for finding nCr.
Press 3 for finding nPr.
Press -1 for Exit.

The program should then perform the appropriate task according to the user choice. Ignore validation of choice input.
Define function int validateInput(); for validating the input numbers (should be a positive non-zero number).
The function keeps on scanning a single integer value until a valid value is available. The function should return this valid value.
*/
int validateInput(int num);
double factorial(int numb);
int Multiplication(int n5, int n6);


int main()
{
    int n=0 , r=0, Prun=0;
    double ans1=0, ans2=0, answer=0;

    while (Prun != -1)
    {
      printf("Input number (n): \n");
      scanf("%d", &n);
      ans1 = validateInput(n);
      printf("Input number (r): \n");
      scanf("%d", &r);
      ans2 = validateInput(r);

      printf("__________________________________________________\n");
      printf("Press 1 for multiplying numbers.\n");
      printf("Press 2 for finding nCr.\n");
      printf("Press 3 for finding nPr.\n");
      printf("Press -1 for Exit.\n");
      printf("__________________________________________________\n");
      scanf("%d", &Prun);

    while(Prun != -1)
    {
        if(Prun == 1)
        {
            answer = Multiplication(ans1,ans2);
            break;
        }
        else if(Prun == 2)
        {
            while (ans1<ans2)
            {
                printf("Logically Incorrect! Value of (n) cannot be smaller than (r)! Enter value for (n) again: \n");
                scanf("%d", &n);
                ans1 = validateInput(n);
            }
            answer = (factorial(ans1)/((factorial(ans1-ans2)) * factorial((ans2))));
            break;
        }
        else if(Prun == 3)
        {
            while (ans1<ans2)
            {
                printf("Logically Incorrect! Value of (n) cannot be smaller than (r)! Enter value for (n) again: \n");
                scanf("%d", &n);
                ans1 = validateInput(n);
            }
            answer = ((factorial(ans1))/(factorial(ans1-ans2)));
            break;
        }
        else
        {
            printf("Input error!");
        }
    }
     printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
     printf("Answer is: %.1f\n",answer );
     printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
    }

return 0;

}

int validateInput(int num)
{
    int inp=0;
    inp = num;

    do
    {
        if (inp>0)
        {
            return inp;
            break;
        }
        else
        {
            printf("Enter valid value again! \n");
            scanf("%d", &inp);
        }
    } while(inp < 0);

}

int Multiplication(int n1, int n2)
{
    int ans;
    ans = n1 * n2;
    return ans;
}

double factorial(int N)
{
    int count=1;
    double sm=1;
    count = N+1;
    while (count!=1)
    {
        sm = sm * (count-1);
        count = count - 1;
    }
    return sm;
}

