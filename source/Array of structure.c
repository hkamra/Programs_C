#include<stdio.h>
#include<conio.h>

struct student_info{
char name[25];
int roll_number;
int age;
int grade;
};


int main(){
int size = 3;
struct student_info HIM[size];

int counter;
for(counter = 0;counter < size;counter++){
    printf("Enter the name\troll_number\tage\tgrade of the student %d\n",counter+1);
    scanf("%s%d%d%s",&HIM[counter].name,&HIM[counter].roll_number,&HIM[counter].age,&HIM[counter].grade);
}
printf("\n\n");

for(counter = 0;counter < size;counter++){
printf("Name %s\tRollNo %d\tAge %d\tGrade %d\n",HIM[counter].name,HIM[counter].roll_number,HIM[counter].age,HIM[counter].grade);
}


getch();
return 0;
}

