#include <stdio.h>


int main(){

int* states;

int buffer[] = {1,0,0,0,0,1,0,0};

/*states = buffer;

if(*states2+ == 0 && *states2- == 0)
{
    *states++ = 0;
}
else
{
    *states++ = 1;
}
*/

//printf("%d",*states++);
printf("%d",(sizeof(buffer)/sizeof(buffer[0])));

getch();
return 0;
}

