#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student_info{
char name[25];
int roll_number;
int age;
int grade;
}HARRY,NIKHIL,HARSHIT,MUDIT,TARUN;  // Declaration of structure variable(either way)


int main(){

struct student_info HIMANSHU = {
"Himanshu Kamra", 7924534 , 26 , 10
};

struct student_info HARRY = {
"Inderpreet Singh", 7846654 , 22 , 9
};

struct student_info NIKHIL = {
"Nikhil Nanda", 7546955 , 23 , 11
};

HARSHIT = HIMANSHU;  // Assigning values of structure to another structure(all of them)
MUDIT = HIMANSHU;

// So as to assign a particular value of the structure, syntax is given below:
strcpy(TARUN.name,HIMANSHU.name);  // To copy a string we have to use this syntax
//puts(TARUN.name); To print the string on the output screen

TARUN.roll_number = HIMANSHU.roll_number;   // To copy any integer value we can directly assign it

printf("Name\tRollno.\tAge\tGrade\n\n");
printf("%s\t%d\t%d\t%d\n",HIMANSHU.name,HIMANSHU.roll_number,HIMANSHU.age,HIMANSHU.grade);
printf("%s\t%d\t%d\t%d\n",HARRY.name,HARRY.roll_number,HARRY.age,HARRY.grade);
printf("%s\t%d\t%d\t%d\n",NIKHIL.name,NIKHIL.roll_number,NIKHIL.age,NIKHIL.grade);
printf("%s\t%d\t%d\t%d\n",HARSHIT.name,HARSHIT.roll_number,HARSHIT.age,HARSHIT.grade);
printf("%s\t%d\t%d\t%d\n",MUDIT.name,MUDIT.roll_number,MUDIT.age,MUDIT.grade);
printf("%s\t%d\t%d\t%d\n",TARUN.name,TARUN.roll_number,TARUN.age,TARUN.grade);

getch();
return 0;
}

