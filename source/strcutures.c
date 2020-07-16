#include<stdio.h>
#include<conio.h>

struct student_info{
char name[25];
int roll_number;
int age;
int grade;
};


int main(){

struct student_info HIM = {
"Himanshu Kamra", 7924534 , 26 , 18
};

printf("Name Rollno. Age Grade\n\n");
printf("%s %d %d %d",HIM.name,HIM.roll_number,HIM.age,HIM.grade);
getch();
return 0;
}
