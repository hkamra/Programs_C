#include<stdio.h>
#include<conio.h>
#include<math.h>

void func1();
void func2();

int main()
{
    printf("In the main function\n");
    printf("Calling function1\n");
    func1();
    printf("Retruning from the function1\n");
    printf("End of main function\n");
}


void func1(){
printf("In the function1\n");
printf("Calling function2\n");
func2();
printf("Returning from the function2\n");
printf("Return to the main function\n");
}

void func2(){
printf("In the function2\n");
printf("Returning to the function1\n");
}
