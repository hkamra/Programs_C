#include<stdio.h>
#include<conio.h>

int main(){

char sirname[] = "Kamra";
char fullname[25] = "Himanshu" ;

strcat(fullname,sirname); // This function concatenate(join) two strings
//printf("\n");
//puts(strcat(fullname,sirname));
printf("%s\n%s\n",fullname,sirname);

int size;
size = strlen(fullname); // This function determines the length of the string
printf("The size of the string is %d",size);

getch();
return 0;
}


