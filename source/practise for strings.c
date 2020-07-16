#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

char in_str[20] = "MATCHMAKING";
char out_str[25];
//char *ptr = str;
char temp, temp1;
int i,j,l;

i = 0;
j = 0;

l = strlen(in_str);

while(i<l){

     if(i<5) {
     temp = in_str[i];
     out_str[j] = temp;
          }
           else if (i==5){
           out_str[j+1] = in_str[i];
           out_str[j] = ' ' ;
        }

             else {
               out_str[j+1] = in_str[i];
}
i++;
j++;
}

out_str[j+1] = '\0';
printf("%s",out_str);

getch();
return 0;

}
