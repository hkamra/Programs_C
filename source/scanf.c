#include<stdio.h>
#include<conio.h>

int main()

{
    int age;
    float weight;

    printf("Enter your age ");
    scanf("%d",&age);

    printf("Enter your weight ");
    scanf("%f",&weight);

    printf("Your age is %d\n Your weight is %f",age,weight);

    getch();
    return 0;

}
