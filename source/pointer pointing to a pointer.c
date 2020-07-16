#include<stdio.h>
#include<conio.h>

// & contains the address of the operator
// * contains the value of the operator
int main()

{
  int x = 10;

  int *j;

  j = &x;

  int **k;

  k = &j;

printf("The value stored in variable x = %d\n",x);
printf("The memory address of the variable x = %p\n",&x); // %p prints the address of the memory location of the host computer
printf("The value stored in *(&x) = %d\n\n",*(&x));

printf("The memory address stored in variable j = %p\n",j);  // If you want the unsigned value of the address use %u instead of %p
printf("The memory address of variable j = %p\n",&j);
printf("The value pointed by variable j = %d\n\n",*j);

printf("The memory address stored in variable k = %p\n",k);
printf("The memory address of variable k = %p\n",&k);
printf("The value pointed by the pointer of variable x = %d\n",**k);

getch();
return 0;
}

