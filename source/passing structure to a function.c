#include<stdio.h>
#include<conio.h>

struct student{
char name[25];
int rollno;
};

void himanshu (char[] , int);
void himanshu1 (struct student);

int main(){
struct student HIM;
strcpy(HIM.name,"Himanshu Kamra");
HIM.rollno = 7924534;

himanshu(HIM.name,HIM.rollno);
himanshu1(HIM);
getch();
return 0;
}

void himanshu (char a[], int b){

printf("In the function himanshu\n\n");
printf("%s\t%d",a,b);

}

void himanshu1 (struct student s){

printf("\n\nIn the function himanshu1\n\n");
printf("%s\t%d",s.name,s.rollno);

}
