#include<stdio.h>
#include<conio.h>
// Macros are used to define the variable or the string which will be used in the program for several times
// This program will show how to define the macro name or identifier, that will be used multiple times in your program
// By defining the macro compiler will look for the identifier in the program and set its limit as shown below

#define LIMIT 10   // Defined macro LIMIT and its limit is 10
#define TOP (LIMIT+1)    // Defined another macro and used the value of the previous to define its limit
#define NAME "Himanshu Kamra"

int main(){
int counter;
printf(NAME"\n\n");  // We can also define a string and then the compiler will replace that macro with the string name
for(counter=1;counter<= LIMIT;counter++){  // In this line compiler will search for macro LIMIT and replace it with the value of 10
    printf("%d\n",counter);
}
for(counter=1;counter<= TOP;counter++){  // In this line compiler will search for macro TOP and replace it with the value of 11
    printf("%d\n",counter);
}
getch();
return 0;
}


