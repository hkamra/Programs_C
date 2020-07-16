#include<stdio.h>
#include<conio.h>
#include<math.h>

int multiplication(int , int); // Function prototyping - Not necessary to write the parameters here
int c;

int main()
{
                              // WOW! Nice modification and got the result without any errors
                              // wrote in 4 mins, EXCELLENT!
int x,y;
printf("Enter the frist number\n");
scanf("%d",&x);
printf("Enter the second number\n");
scanf("%d",&y);
c = multiplication(x,y);
printf("The multiplication of %d and %d is %d",x,y,c);

getch();
return 0;

}

int multiplication(int a , int b)
{
//int c;
c=a*b;

return c;

}
