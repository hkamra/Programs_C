#include<stdio.h>
#include<conio.h>


struct student{
char name[25];
int rollN;
};

struct address{
char street[25];
int houseN;

struct student him;
};

int main()
{

struct address addr = {
"Nehru Market" , 77 , "Himanshu" , 7924534    // Alternative method to assign the values to the variable within the structure
};

strcpy(addr.street,"Nehru Market");
addr.houseN = 77;

strcpy(addr.him.name,"Himanshu");  // Way to assign the value to the variables within the structure
addr.him.rollN = 7924534;

printf("%d\t%s\t",addr.houseN,addr.street);
printf("%d\t%s",addr.him.rollN,addr.him.name);

getch();
return 0;
}
