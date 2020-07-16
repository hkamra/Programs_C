#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int solution(int N);

int main(){

int N;
printf("In the main function\n");
printf("Enter the number to find the binary gap: ");
scanf("%d",&N);

solution(N);

getch();
return 0;
}

int solution(int x){


int remainder,i;

LEO :

for (i=0;i<10;i++)
   {
      remainder = x%2;
      int a[30];
      a[i] = remainder;
      printf("%d",a[i]);
      int z;
      z = x/2;
      z = x;
if (z>1)
    {

    goto LEO ;

    }

else {

    exit(-1);

     }

}
}
