#include<stdio.h>
#include<conio.h>

//void display(int marks[],int size);

void display(int marks[],int size){
    int counter;
    for(counter=0;counter<size;counter++){
printf("The value of the %d array is %d\n",counter,marks[counter]);
    }

}

int main()

{
    int sz = 5;
    int marks[sz];
    int cnt;
    for(cnt=0;cnt<sz;cnt++){
    printf("Enter the number scored in %d subject\n",cnt);
    scanf("%d",marks[cnt]);
    }


    display(marks,5);

    getch();
    return 0;
}


