#include<stdio.h>
#include<conio.h>
#include<string.h>
int find(char);
int(*function())(char);
int main(){
int x;
int(*ptr)(char);
ptr=function();
x=(*ptr)('A');
printf("%d",x);
return 0;
}
int find(char c){
return c;
}
int(*function())(char){
return find;
}
