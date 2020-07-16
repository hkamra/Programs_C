#include<stdio.h>
#include<conio.h>

int harry(int , int);


int main(){

int  a = 10;
int  b = 20;

printf("Values in the main function\n\nValue of a is %d\n\nValue of b is %d\n\n",a,b);

harry( a, b);

printf("Values in the main function after returned to the main\n\nValue of a is %d\n\nValue of b is %d\n\n", a, b);

getch();
return 0;
}


int harry( int  x , int  y){

x = x+=2;
y = y+=5;
printf("Values in the called function\n\nValue of x is %d\n\nValue of y is %d\n\n",x,y);

}


