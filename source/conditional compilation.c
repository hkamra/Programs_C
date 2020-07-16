#include<stdio.h>
#include<conio.h>
// This code will show you the use of # conditional compilation directives used in C Like #if , #else , #elif , #endif
// #elif works same as elseif condition

#define MARKS 95

int main()

{
#if MARKS >= 75

    printf("You have scored more than 75\n");
    printf("You have got grade A\n");


#elif (MARKS >= 50 && MARKS < 75)

    printf("You have scored more than 50 but less than 75\n");
    printf("You have got grade B\n");

#else

    printf("You have scored less than 50\n");
    printf("You have got grade C\n");

#endif

    getch();
    return 0;
}
