#include<stdio.h>
#include<conio.h>

#include "Preprocessor directive 2.c"  // This includes the another file present in the same folder
// Compiler will look for the file in the same folder
void display();

int main(){
display(); // Function called which is saved in the another file but should be in the same folder
getch();
return 0;
}
