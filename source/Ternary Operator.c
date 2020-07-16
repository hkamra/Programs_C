#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    int X;

    printf("Enter your age to check whether you are adult or minor ");
    scanf("%d",&age);

/* Syntax of ternary operator, if the condition is true then the first statement (before the colon) will be executed
   otherwise the second statement (after the colon) will be executed if the condition is false */

 //   age>=18 ? printf("\nYou are an adult, have fun!") : printf("\nYou are a minor, wait till you reach 18");

/* This is a similar statement just insert the true or the false value into vaiable X */

X = (age>=18) ? 1 : 0;
printf("\n%d",X);

    getch();
    return 0;
}
