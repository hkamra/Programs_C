#include<stdio.h>
#include<conio.h>
#include<math.h>

/* This code represents how to initialize the array */

int main()

{
   /* int marks[6] = {35,86,96,68,57,89};

    float avg[3];
    avg[0]=56.23;
    avg[1]=65.36;
    avg[2]=89.35;

    printf("%d\n",marks[0]);

    printf("%d\n",marks[3]);
    printf("%d\n",marks[4]);
    printf("%f\n",avg[2]);     */

    /* Some modifications to the above program, I will ask the user to input the values and it will
    give you the average of your marks */

int n = 6;
int marks[n];
int counter;
float average;

for (counter=0;counter < n; counter++){
printf("Enter the marks scored in %d subject\n",counter+1);
scanf("%d",&marks[counter]);
}

for (counter=0;counter < n; counter++){
printf("The average marks scored in %d is %d\n",counter+1,marks[counter]);
}

average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5]) / 6;
printf("The average marks scored is %f",average);

getch();
return 0;

}
