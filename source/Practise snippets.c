#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*int main(){

int c =- -2;  // In this case compiler will read minus * minus = plus unlike the decrement operator --
printf("c=%d",c);

getch();
return 0;
}*/

#define int char

/*int main(){

int i = 65; // It won't give any error here because in macro integer is replaced by a char i.e. size of i is 1

printf("sizeof(i)=%d",sizeof(i));

getch();
return 0;

} */

int main()
{
int i=10;
i=!i>14;
printf("i=%d",i);
}

