#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void print_repeating(int arr[] , int arr_size){

int i,j;
        for (i=0;i<arr_size;i++){
            for (j=i+1;j<arr_size;j++){
                if(arr[i] == arr[j]){
                    printf("The same numbers in the given string is: %d",arr[i]);
                }
            }
        }

                     }

int main(){

int arr[] = {2,3,5,56,89,3};
int arr_size;

arr_size = sizeof(arr)/sizeof(arr[0]);

print_repeating(arr,arr_size);

getch();
return 0;

}
