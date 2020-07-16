#include<stdio.h>
#include<conio.h>

void display();
void increment();
int a = 0; // Global space for defining the variables

int main()

{
 int b = 3;   //Local space for defining the variables
 b+=2;
 printf("Value of b from the main is %d\n",b);
// printf("Value of a from the main %d\n",a);
 //a+=3;
 //increment();
 display();
 getch();
 return 0;
}

// NOTE: Variable defined in the fucntion are independent, like in this case b is defined in main function as well as
//display function and being printed

void increment(){
printf("Value of a from the increment %d\n",a);
}

void display(){
int b = 5;
b+=3;
printf("Value of b from dsiplay is %d\n",b);
}
