#include <stdio.h>
#include <math.h>

//vf=vi + at
//s=vit + 0.5at^2
// 2as=vf^2 - vi^2

/*
Write a program that inputs the initial velocity, acceleration and time values from the user.
The program should then compute final velocity using Newton’s first equation of motion and distance travelled according to Newton’s second and third equations of motion, respectively.
Verify that the distance travelled computed using both second and third equations of motion is the same. Finally, display these values on the screen.
*/

int main()
{
    int ivel, acc, timef, fvel, dist1, dist2;  //ivel for initial velocity, acc for acceleration, fvel for final velocity, dist1 and dist2 for distance comparisons after calculation

    printf("Input Initial Velocity: ");
    scanf("%d",&ivel);
    printf("Input Acceleration: ");
    scanf("%d",&acc);
    printf("Input Time: ");
    scanf("%d", &timef);

    fvel = ivel + (acc * timef);
    dist1 = ivel + (acc* pow(timef,2))/2;
    dist2 = (pow(fvel,2)-pow(ivel,2))/(2*acc);

    if (dist1 == dist2)
    {
        printf("Both the distances are equal!!: %d  %d",dist1,dist2);
    }
    else
    {
        printf("Distances are not equal!: %d%  d", dist1,dist2);
    }

    return 0;
}
