#include<stdio.h>
#include<conio.h>


int main(){

int *ptr;
ptr =(int *)malloc(sizeof(int));

if (ptr == NULL){
    puts("Memory not allocated");
}else{
*ptr = 20;
printf("%d",*ptr);
free(ptr);
}
getch();
return 0;
}
