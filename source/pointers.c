#include<stdio.h>
#include<conio.h>

// & contains the address of the operator
// * contains the value of the operator
int main()

{
  int x = 10;

  int *j;

  j = &x;

printf("The value stored in variable x = %d\n",x);
printf("The memory address of the variable x = %p\n",&x);
printf("The value stored in *(&x) = %d\n\n",*(&x));

printf("The memory address stored in variable j = %p\n",j);
printf("The memory address of variable j = %p\n",&j);
printf("The value pointed by variable j = %d\n",*j);

getch();
return 0;
}
