#include<stdio.h>
#include<conio.h>

// When the function returns to the main function it will restore the value of x and y
// The value of a and b in the display function are independent of each other

void display(int , int);

int main(){

int x = 10;
int y =20;

printf("Before the funtion, the value of x is %d and the value of y is %d\n",x,y);

display(x,y);

printf("After the funtion, the value of x is %d and the value of y is %d\n",x,y);

getch();
return 0;
}


void display(int a , int b){

printf("The value of a is %d and the value of b is %d\n",a,b);

a = 100;
b = 200;

printf("The value of a is %d and the value of b is %d\n",a,b);

}
