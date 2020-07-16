#include<stdio.h>
#include<conio.h>

struct info{

char full_name[25];
int age;
unsigned int number;
};

int main(){

struct info Himanshu = {"Himanshu Kamra",16,61344};

printf("%s\t%d\t%d",Himanshu.full_name,Himanshu.age,Himanshu.number);

getch();
return 0;
}
