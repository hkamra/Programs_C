#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
    int i;
    char name[] = {'H','I','M','A','N','S','H','U','\0'}; // The end value of the character array is always null,
    char sirName[] = "KAMRA";                            // otherwise compiler will give you a garbage value in place of null

    for (i=0;i<8;i++){        // modification for fun
    printf("%c\n",name[i]);} // You can print the each character of the character array

    printf("\n%s %s",name,sirName); // Or you can print the whole string using %s as format specifier

    getch();
    return 0;
}
