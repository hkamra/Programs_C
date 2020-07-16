#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){

char arr[100];
int i,j;

for (i=0;i<4;i++){

printf("Enter the %d value in the array: ",i+1);
scanf("%s",&arr[i]);
}

for (j=0;j<4;j++){
    printf("%c ",arr[j]);
}

getch();
return 0;
}

