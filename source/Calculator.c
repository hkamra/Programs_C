#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F "Enter the first number\n"
#define S "Enter the second number\n"
#define A "\nAnswer =%f\n\n"

/* This is a simple Calculator designed by Himanshu Kamra, more features will be added to it as I keep learning
more about pointers, arrays and functions */

int main()
{
    printf("KAMRA'S CALCULATOR\n\n");
    printf("Hope you are doing good!\n\n");
    printf("What would you like to do today with the calculator?\n\n");
    float a,b,add_result,d,e,sub_result,f,g,mul_result,h,i,div_result,j,sqrt_result,k,l,pow_result;
    int c;
    int number;
    int option;

for(c=0;c>=0;c++)
{

    printf("Choose one of the following option to proceed:\n\n");
    printf("1. Add\n\n");
    printf("2. Subtract\n\n");
    printf("3. Multiply\n\n");
    printf("4. Divide\n\n");
    printf("5. Square Root\n\n");
    printf("6. Find the power of a number\n\n");
    scanf("%d",&number);
    printf("\n");

    switch(number)
{
    case 1:
        printf(F);
        scanf("%f",&a);
        printf(S);
        scanf("%f",&b);
        add_result = a+b;
        printf(A,add_result);
        //printf("Would you like to continue?\n\n6. Yes\n\n7. No\n\n");
        //scanf("%d\n\n",&option);
        //if(option==7)
        break;
        //else
        //continue;

    case 2:
        printf(F);
        scanf("%f",&d);
        printf(S);
        scanf("%f",&e);
        sub_result = d-e;
        printf(A,sub_result);
        //printf("Please press enter to continue or any other key to exit\n\n");
        break;
    case 3:
        printf(F);
        scanf("%f",&f);
        printf(S);
        scanf("%f",&g);
        mul_result = f*g;
        printf(A,mul_result);
        //printf("Please press enter to continue or any other key to exit\n\n");
        break;
    case 4:
        printf(F);
        scanf("%f",&h);
        printf(S);
        scanf("%f",&i);
        div_result = h/i;
        printf(A,div_result);
        //printf("Please press enter to continue or any other key to exit\n\n");
        break;

    case 5:
        printf("Enter the number\n");
        scanf("%f",&j);
        sqrt_result = sqrt(j);
        printf(A,sqrt_result);
        //printf("Please press enter to continue or any other key to exit\n\n");
        break;

    case 6:
        printf("Enter the number\n");
        scanf("%f",&k);
        printf("Raise to the power\n");
        scanf("%f",&l);
        pow_result = pow(k,l);
        printf(A,pow_result);
        //printf("Please press enter to continue or any other key to exit\n\n");
        break;

        default:
        printf("INVALID ENTRY! PLEASE TRY AGAIN.\n\n");
}

}

    getch();
    return 0;
}

