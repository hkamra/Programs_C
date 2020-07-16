#include<stdio.h>
#include<conio.h>
#include<math.h>



void display(); // functions prototyping step so that the compiler should know that we have a function name display in the program
               // If you want to avoid the function prototyping, we can define the function before the main function
int main()
{
    display();      // calling a function (function can only be called from the main function
    display();

    getch();
    return 0;
}


void display(){

printf("This value is printed by the function\n");

}
