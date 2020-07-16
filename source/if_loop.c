#include<stdio.h>
#include<conio.h>

int main()
{
    int counter = 0,i;

  /* (  for (counter=0,i=100;(counter<10 || i>0);counter++,i++)
    {
        printf("%d\n%d",counter,i);
    } */

      for ( ; ; )
    {
        printf("%d\n",counter);
        counter++;
        if (counter==5)
            break;
    }

    getch();
    return 0;
}
