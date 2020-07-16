#include<stdio.h>
#include<conio.h>
#include<math.h>

int addition(int , int); // Function prototyping - Not necessary to write the parameters here

int main()
{
                              // WOW! Nice modification and got the result without any errors
                             // wrote in 4 mins, EXCELLENT!
int x,y,c;
printf("Enter the frist number\n");
scanf("%d",&x);
printf("Enter the second number\n");
scanf("%d",&y);
c = addition(x,y);   // NOTE: this step is very important, The syntax to call the function when you are returning the values
printf("The addition of %d and %d is %d",x,y,c);

getch();
return 0;

}

int addition(int a , int b)
{
int c;
c=a+b;

return c;

}

