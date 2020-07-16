#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

char * get_the_string(char * x){
return x;
}


int main(){
char Str[] = "Hello!";
char *a = get_the_string(Str);
printf("%s" , a);
getch();
return 0;

}
