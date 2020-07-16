#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

int n,i,k,j,arr_size;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);

arr_size = n;
int arr[100];

printf("Enter the numbers in the element: ");

for (i=0;i<arr_size;i++){
scanf("%d",&arr[i]);
}

// Arrange in ascending order

for (k=0;k<arr_size;k++){

    for (j=k+1;j<arr_size;j++){
        if (arr[k] > arr[j]){

            int v;
            v = arr[k];
            arr[k] = arr[j];
            arr[j] = v;

        }

    }

}

int p;

printf("The array arranged in the ascending order is: ");
for (p=0;p<arr_size;p++){
printf("%d ",arr[p]);
}

getch();
return 0;

}
