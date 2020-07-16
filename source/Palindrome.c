#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

char str[100];
char in_str[100];
int i,l,j,v;

printf("Enter the string: ");
scanf("%[^\n]",str);
printf("\n");

strcpy(in_str,str); // Input string

l = strlen(in_str);
i = 0;
j = l - 1;

while (i<j){

    v = str[i];
    str[i] = str[j];
    str[j] = v;

    i++;
    j--;

}

char rev_str[100];

strcpy(rev_str,str); // Reversed string

printf("The reverse string is: %s\n\n",rev_str);

if (strcmp(rev_str,in_str)){
    printf("The given string is not a Palindrome");
}

else {
    printf("The given string is a Palindrome");
}
_getch();
return 0;
}
