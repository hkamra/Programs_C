// INCLUDE HEADER FILES NEEDED BY YOUR PROGRAM
// SOME LIBRARY FUNCTIONALITY MAY BE RESTRICTED
// DEFINE ANY FUNCTION NEEDED
// FUNCTION SIGNATURE BEGINS, THIS FUNCTION IS REQUIRED

// This is one of the amazon interview question, in which you have 8 cells, the neighbouring cells determine the status of each
// cell for tomorrow. If the neighbouring cell are either active or inactive, then the status of the cell will inactive tomorrow.
// Else it will be active tomorrow, for the first and the last cell consider the vacant side to be 0 or inactive.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    int size;
    int* arr;
}boundedarray;

int final_array[8];

boundedarray* cellCompete(int* states, int days)
{
    // WRITE YOUR CODE HERE

    int a = 0;
    int loop = 1;
    int array[8];

    boundedarray* storeValue;


    for (a = 0; a < 8; a++)
    {
        array[a] = *states++;
    }
/*
    int test;
    for(test=0; test<8; test++)
    {
        printf("%d\n",array[test]);
    }
*/
//    memcpy(array,&states[0],sizeof(states));

    for(loop = 1; loop <= days; loop++)
    {

      if (array[1] == 0)
      {
        final_array[0] = 0;
      }
      else
      {
        final_array[0] = 1;
      }

      if (array[2] == 0 && array[0] == 0 || array[2] == 1 && array[2] == 1)
      {
        final_array[1] = 0;
      }
      else
      {
        final_array[1] = 1;
      }

      if (array[3] == 0 && array[1] == 0 || array[3] == 1 && array[1] == 1)
      {
        final_array[2] = 0;
      }
      else
      {
        final_array[2] = 1;
      }

      if (array[4] == 0 && array[2] == 0 || array[4] == 1 && array[2] == 1)
      {
        final_array[3] = 0;
      }
      else
      {
        final_array[3] = 1;
      }

      if (array[5] == 0 && array[3] == 0 || array[5] == 1 && array[3] == 1)
      {
        final_array[4] = 0;
      }
      else
      {
        final_array[4] = 1;
      }

      if (array[6] == 0 && array[4] == 0 || array[6] == 1 && array[4] == 1)
      {
        final_array[5] = 0;
      }
      else
      {
        final_array[5] = 1;
      }

      if (array[7] == 0 && array[5] == 0 || array[7] == 1 && array[5] == 1)
      {
        final_array[6] = 0;
      }
      else
      {
        final_array[6] = 1;
      }

      if (array[6] == 0)
      {
        final_array[7] = 0;
      }
      else
      {
        final_array[7] = 1;
      }

      if (loop != days)
      {
          memcpy(array,final_array,sizeof(array));
      }
    }

    storeValue->size = days;
    storeValue->arr = final_array;

    return(storeValue);

}

int main()
{
    boundedarray* status;
    int todayStatus[8];

    int* localPtr;

    int array[] = {0,1,0,0,0,1,0,0};  // this is the initial status of the 8 cells

    status = cellCompete(array,1);    // second parameter is the number of days

    localPtr = status->arr;

    memcpy(todayStatus,localPtr,sizeof(array));

    if (status->size == 1)
    {
        printf("Status of 8 houses after %d day is: ",status->size);
    }
    else
    {
        printf("Status of 8 houses after %d days is: ",status->size);
    }

    int check;
    for (check=0; check<(sizeof(todayStatus)/sizeof(todayStatus[0]));check++)
    {
        if (check == 0)
        {
            printf("[%d",todayStatus[check]);
        }
        else if(check != (sizeof(todayStatus)/sizeof(todayStatus[0]) - 1))
        {
            printf(" %d",todayStatus[check]);
        }
        else
        {
            printf(" %d]",todayStatus[check]);
        }
    }

    return 0;
}
