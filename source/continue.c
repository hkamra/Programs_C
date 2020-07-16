#include<stdio.h>
#include<conio.h>

/* This program can be used to print odd or even numbers using continue statement, which will skip
the printf statement if the condition is true in the if statement */

int main()

{
    int counter;
    for(counter=0;counter<=10;counter++)
    {

if (counter % 2 != 0)
continue;
        printf("%d\n",counter);

    }
    getch();
    return 0;
}
