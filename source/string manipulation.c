#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h>


int main(){

char c[150];

char s[] = "absbvcgsvcgsvgvsvchavvahgvc////////&&&&$$$$$$$$";

strcpy(c,s);

char cpy;
int l;
l = strlen(c);
printf("%d\n",l);
int n = 0;
int str_size = 0;

for (int i = 0;i < l;i++){
        for (int j = i+1;j < l;j++){
        if (c[i] == c[j]){
        c[j] = ' ';
        }
else if (c[i] == '?') {
        c[j] = ' ';
}
     }
    }

// The code given below is use to remove blank spaces from a string

char *oldstr = c;

char *newstr = malloc(strlen(oldstr)+1);
char *np = newstr, *op = oldstr;
do{
    if (*op != ' ')
        *np++ = *op;
}  while (*op++);


printf("%s\n",newstr);
//puts(c);

return 0;
getch();

}
