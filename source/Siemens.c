#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

int a = 12345;
int b =  a & ~a;
int c = a | ~a;
int d = a ^ a;

printf("%d\n%d\n%d",b,c,d);
printf("\n%d",~a);
printf("\n%d",sizeof(unsigned int));
getch();
return 0;
}
