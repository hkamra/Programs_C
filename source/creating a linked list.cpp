#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Frank->Mary,Mary->Sam,Mary->Bob,Sam->Katie,Sam->Pete,Bob->John,Bob,Katie

long int n;

struct Node {
int data;
Node* next;
};

Node* head;  // Global variables, can be accessed anywhere
void insert(int x){

        Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;

                  }
void print(){
        Node* temp = head;
        cout << "Linked List is: ";
        while (temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
         cout << endl;
}

void length(){
Node* temp;
temp = head;  // Very important to initialize the pointer
int length = 0;

while (temp != NULL){
    length++;
    temp = temp->next;
}
    cout << "Number of the nodes in the linked list is: " << length << endl << endl;

}

void middle_of_the_list(){

Node* temp;
temp = head;
int node;

if ((n%2) == 0){
    node = (n/2) + 1;
}

else {
    n = n + 1;
    node = n/2;
}

cout << "The middle node is: " << node << endl;

for (int i = 0;i<n;i++){
        temp = temp->next;
    if (i == node - 2){
        cout << "The data stored at the middle of the Linked list is: " << temp->data ;
        break;
    }

}
}

Node* deleteMid(Node* head){

if (head == NULL)
    return NULL;
if (head->next == NULL){

    delete head;
    return NULL;
}

Node* fast_ptr = head;
Node* slow_ptr = head;

Node* prev;

if(fast_ptr != NULL && fast_ptr->next != NULL){

    fast_ptr = fast_ptr->next->next;
    prev = slow_ptr;
    slow_ptr = slow_ptr->next;
}

prev->next = slow_ptr->next;
delete slow_ptr;

};

void insertAfter(int data , int node){

struct Node* temp = head;
struct Node* newNode;

int counter;

while(counter < node){

    temp = temp->next;
}

newNode = (struct Node*)malloc(sizeof(struct Node));

newNode->next = temp->next;
temp->next = newNode;
newNode->data = data;
}
int main(){

head = NULL;

int i,x,p;

cout << "How many numbers you want to add to the linked list: ";
cin >> n;

for (i=0;i<n;i++){
    cout << "Enter the number: ";
    cin >> x;
    insert(x);
    print();
}

length();
middle_of_the_list();

//head = deleteMid(head);
//print();

//insertAfter(x,node);
getch();
return 0;
}




