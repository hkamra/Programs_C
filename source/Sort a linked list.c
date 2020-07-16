#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

struct node {
int value;
struct node *next;
};

typedef struct node Node;

Node *current = NULL;
Node *next    = NULL;
Node *prev    = NULL;

void insert(int data){

Node *temp = (Node*) malloc(sizeof(Node));

temp->value = data;
temp->next = current;
current = temp;

}

void displayLinkedList(){

Node *ptr = current;

while(ptr != NULL){
    printf("%d ",ptr->value);
    ptr = ptr->next;
}
}

void reverseLinkedList(){

while(current != NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
}
current = prev;
}

int main(){

insert(16);
insert(18);
insert(20);

reverseLinkedList();

displayLinkedList();

return 0;
}

