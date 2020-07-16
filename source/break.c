#include<stdio.h>
#include<conio.h>

int main()
{
    int counter;

    for(counter=0;counter<10;counter++){

if (counter==6){
    break;
}
        printf("%d\n",counter);
    }

    printf("Loop is over");

    getch();
    return 0;

}
