#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0, sizec=0, temp=0;
    int searchkey=0, bottom=0, mid=0, top=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    //Initializing Array
    int Arr[size];
    for(int x=0; x<size; x++)
    {
        printf("\nEnter the element %d of array: ", (x+1));
        scanf("%d", &Arr[x]);
    }
    //Sorting Array
    sizec = size;
    for(int y=0; y<sizec; y++)
    {
        for(int z=0; z<size; z++)
        {
            if(Arr[z] > Arr[z+1])
            {
                temp = Arr[z+1];
                Arr[z+1] = Arr[z];
                Arr[z] = temp;
            }
            else if(Arr[z]< Arr[z+1])
            {
                continue;
            }
        }
    }
    printf("Array Sorted into:\n");
    for(int s=0; s<size; s++)
    {
        printf("\nElement#%d: %d", (s+1),Arr[s]);
    }

//Searching the Array

  while(searchkey!= 919191)
  {
    printf("\n\nEnter the value you want to search: ");
    scanf("%d", &searchkey);
    mid = (size-1)/2;
    bottom = 0;
    top = size-1;
    while(bottom!=top)
    {
            if(Arr[mid]< searchkey)
            {
                bottom = mid+1;
                mid = bottom + ((top-bottom)/2);
            }
            else if(Arr[mid] > searchkey)
            {
                bottom = 0;
                top = mid-1;
                mid = top/2;
            }
            else if(Arr[mid] == searchkey)
            {
                printf("Number Found at position %d", (mid+1));
                break;
            }
            else
            {
                printf("Value not found!");
            }
    }

  }

    return 0;
}
//mid = (top-bottom)/2;
 // printf("Letter was found at %d position!", mid+1);
