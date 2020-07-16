#include<stdio.h>
#include<conio.h>

// Pass by reference means passing the address of the variable to the function
// NOTE: We can change the value of the variable in the called function

void display(int *, int *);

int main()

{
    int x = 100;
    int y = 200;
    printf("Before the function, The value of x is %d and the value of y is %d\n",x,y);
    display(&x,&y);
    printf("After the function, The value of x is %d and the value of y is %d\n",x,y);
    getch();
    return 0;
}

void display(int *a,int *b){

printf("The value of x is %d and the value of y is %d\n",*a,*b);
*a = 10; // Changed the value of variable stored in the memory location
*b = 20;
}
