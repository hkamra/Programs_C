#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define courses_completed N
#define courses_need_to_be_done M

char *list_of_course_codes(){

char N;
char M;
int num,num1,i,j;
static char arr[50];

printf("Enter the number of courses that has been completed\n");
scanf("%d",&num);
printf("\n");

for (i=1;i<=num;i++){
    printf("Enter course %d "); scanf("%[^\n]",N);
}

printf("Enter the number of courses that has to be completed\n");
scanf("%d",&num1);
printf("\n");

for (j=1;j<=num1;j++){
    printf("Enter course %d "); scanf("%[^\n]",M);
    arr[j] = M;
}

return arr;
}

void get_the_bill() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;

    scanf("%lf",&mealCost);
    scanf("%d",&tipPercent);
    scanf("%d",&taxPercent);

    int totalCost;
    double fraction;

    totalCost = mealCost + (tipPercent * mealCost)/100 + (taxPercent * mealCost)/100;

    fraction = (mealCost%10)%1 ;
printf("%f",fraction);
    fraction = fraction * 100 ;
    if (fraction >= 50){

        printf("The total meal cost is %d dollars.",totalCost++);
    }
    else {

        printf("The total meal cost is %d dollars.",totalCost);
    }
    }
    //printf("%g\n",fraction);
    //printf("The total meal cost is %d dollars.",totalCost);



void how_to_input_string(){
char input_string[] = "I will";
char second_string[50];

printf("Enter the second string\n");
scanf("%[^\n]s",second_string);

//strcat(input_string,second_string);

printf("\n\nHello, World! The concatenated String is given below: \n");
printf("%s %s",input_string,second_string);
//puts(strcat(input_string,second_string));
}

void how_to_input_double_and_join_strings(){

int i = 4;
double d =4.0;
char s[] = "Hacker ";

// Declare second integer, double, and String variables.
int c;
double f;
char g[100];

    // Read and save an integer, double, and String to your variables.
scanf("%d",&c);
scanf("%lf",&f);
scanf("%*[\n] %[^\n]",g);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",c+i);
    // Print the sum of the double variables on a new line.
    printf("%0.1f\n",d+f);
    // Concatenate and print the String variables on a new line.
    //strcat(s,g);
    printf("%s%s",s,g);
    // The 's' variable above should be printed first.
}

int main(){
char a[];
//how_to_input_string();
//how_to_input_double_and_join_strings();
//get_the_bill();
a[] = list_of_course_codes();
getch();
return 0;
}
