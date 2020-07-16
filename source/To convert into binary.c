#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){

int n,rem;
long int num = 0,a=1,m;
printf("Enter the number to find the binary equivalent: ");
scanf("%d",&n);

while (n!=0){

rem = n%2;
num = num + rem*a;
n = n/2;
a = a*10;

}
printf("The binary equivalent is: ");
printf("%ld",num);

getch();
return 0;
}
