#include<stdio.h>
#include<conio.h>

/* This program show how to use switch statement and it is modified into a infinite for loop */

int main()
{
    int c;
    int number;

for(c=0;c<2;c++)
{
    printf("\nEnter the value of the number between 1 to 4\n");
    scanf("%d",&number);
    printf("\n");

    switch(number)
{
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    default:
        printf("INVALID ENTRY\n");
}

}

    getch();
    return 0;
}
