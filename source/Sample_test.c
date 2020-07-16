#include<stdio.h>
#include<conio.h>

void StairCase(int);

int main(){

int _n;

printf("Enter the number of stair you want:- ");
scanf("%d",&_n);

StairCase(_n);
getch();
return 0;
}

void StairCase(int n) {
    int i,j,k;

    for (k=0;k<n+1;k++){

    for (i=n;i>k-1;i--){
        printf(" ");}

    for (j=0;j<k;j++){
            printf("#");
        } printf("\n");
    }
}
