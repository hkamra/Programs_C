#include<stdio.h>
#include<conio.h>

#define CHECK(number) if(number >= 10){  \
                         printf("\nThe number is greater than 10\n");  \
                         }     \
                         else {printf("\nThe number is less than 10\n");} \

int main(){
int x;
printf("Enter the number to check whether it is greater than or not "),
scanf("%d",&x);
CHECK(x);  // Passing a number to a macro to check whether the number is greater than or not

getch();
return 0;
}
