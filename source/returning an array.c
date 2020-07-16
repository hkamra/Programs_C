#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define courses_completed N
#define courses_need_to_be_done M

char *list_of_course_codes(){

char N[50];
char M[50];
int num,num1,i,j;
static char arr[50];

printf("Enter the number of courses that has been completed: ");
scanf("%d",&num);


for (i=1;i<=num;i++){
    printf("Enter course %d ",i);
    scanf("%[^\n]s",&N[i]);
}



printf("\nEnter the number of courses that has to be completed: ");
scanf("%d",&num1);
printf("\n");

for (j=1;j<=num1;j++){
    printf("Enter course %d ",j); scanf("%s",&M[j]);
    arr[j] = M[j];
}

return arr;
}

int main(){
char a[50];

*a = list_of_course_codes();
getch();
return 0;
}
