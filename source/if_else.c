#include<stdio.h>
#include<conio.h>

int main()

{
    /* Code to check whether you are minor or adult */
    /* User will be asked to enter the age and the code will respond accordingly */
    /* operators && AND operator and || OR operatot and != NOT EQUAL TO */

    int age;
    printf("Enter your age to check if you are eligible to have fun in your life ");
    scanf("%d",&age);

    if(age>=18){
        printf("\nYou are an Adult, go and have fun in your life");
    }

    else {
        printf("You are a minor, wait for fun till you reach 18");
    }

    getch();
    return 0;
}
