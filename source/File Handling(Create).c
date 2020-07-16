#include<stdio.h>
#include<conio.h>

int main(){

FILE *Fpointer;

Fpointer = fopen("himanshu.txt","a+");  // We can open file in different modes "r" - you can open file in read mode
                                      // If the file is not there it will create a file for you
if (Fpointer == NULL){               // "w" - you can open the file in write mode (data will be lost in this case)
                                    //  "a" - append mode you can edit your file and data will not be lost
    printf("Unable to create file"); // "r+" - will delete the previous file and create a new file in read mode
}                                   // "w+" - will delete previous file and create new file (data will be lost)
else{                              //  "a+" - will open file for read and write and data will not be lost

    printf("File created successfully");

    fclose(Fpointer);
}



getch();
return 0;
}
