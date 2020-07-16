#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

char s[] = "ahshgshagshgasggsjasjgajsgj";

char *ptr = s;

*ptr++;
*ptr++;

printf("%c",*ptr);
getch();

return 0;
}
