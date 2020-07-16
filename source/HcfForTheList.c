#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int findTheHCFForTheList(int* arr, int Num)
{
    int i,j,HcfIs,saveTheHcf;
    bool noHCFFound = true;

    int localBuffer[Num];

    memcpy(localBuffer,arr,sizeof(localBuffer));

    for(i=0;i<Num;i++)
    {
        for(j=i+1;(j<Num && (i != j));j++)
        {
            if(localBuffer[j] % localBuffer[i] != 0)
            {
                //printf("This cannot be the HCF: ");
                break;
            }
            else
            {
                //printf("This is the HCF: %d",localBuffer[i]);
                noHCFFound = false;
                saveTheHcf = localBuffer[i];
                break;
            }
            j++;
        }

        if(noHCFFound == false)
        {
            break;
        }
        i++;
    }

    if(noHCFFound == true)
    {
        HcfIs = 1;
    }
    else
    {
        HcfIs = saveTheHcf;
    }

    return HcfIs;
}

int main()
{
    int HighestCommonFactor;

    int array[] = {17,34,51,68,85};

    HighestCommonFactor = findTheHCFForTheList(array,(sizeof(array)/sizeof(array[0])));

    printf("The HCF for the list is: %d\n",HighestCommonFactor);

    return 0;
}
