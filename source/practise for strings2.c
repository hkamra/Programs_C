#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

char str[100];
char temp;
int i,j;

printf("Enter the string you want to reverse: ");
scanf("%[^\n]",str);

i = 0;
j = strlen(str) - 1 ;


while(i<j+1){

temp = str[i];
str[i] = str[j];
str[j] = temp;

i++;
j--;
}



printf("%s",str);

getch();
return 0;

}
