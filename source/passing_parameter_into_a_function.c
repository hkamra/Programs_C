#include<stdio.h>
#include<conio.h>
#include<math.h>

void addition(int , int); // Function prototyping - Not necessary to write the parameters here

int main()
{
                              // WOW! Nice modification and got the result without any errors
                              // wrote in 4 mins, EXCELLENT!
int x,y;
printf("Enter the frist number\n");
scanf("%d",&x);
printf("Enter the second number\n");
scanf("%d",&y);
addition(x,y);

getch();
return 0;

}

void addition(int a , int b)
{
int c;
c=a+b;
printf("The addition of %d and %d is %d",a,b,c);

}
