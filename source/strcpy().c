#include<stdio.h>
#include<conio.h>

int main(){

char source[] = "Himanshu Kamra";
char target[25];

strcpy(target,source);
//puts(target);
printf("%s\n%s",source,target);

getch();
return 0;
}

