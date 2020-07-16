#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* next;
};

struct Node* head;  // Global variables, can be accessed anywhere
void insert(int x){

struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = x;
        temp->next = head;
        head = temp;

                  }
void print(){
struct Node *temp = head;
        printf("Linked List is: ");
        while (temp != NULL){
            printf("%d -->" , temp->data);
            temp = temp->next;
        }
         printf("\n");

}
int main(){

head = NULL;

int n,i,x;

printf("How many numbers you want to add to the linked list: ");
scanf("%d",&n);

for (i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    insert(x);
    print();
}

getch();
return 0;
}



