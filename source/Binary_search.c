#include <stdio.h>
#include <stdbool.h>

#define FALSE 0
#define TRUE 1

typedef struct {
       int data;
       struct BstNode* left;
       struct BstNode* right;
} BstNode;

BstNode* root ;

BstNode* getnewNode(int data)
{
   BstNode* newNode = malloc(sizeof(BstNode));
   newNode->data = data;
   newNode->left = newNode->right = NULL;
   return newNode;
}

BstNode* Insert (BstNode* root , int data)
{
   if (root == NULL)
   {
      root = getnewNode(data);
   }
   else if(data <= root->data)
   {
      root->left = Insert(root->left,data);
   }
   else
   {
      root->right = Insert(root->right,data);
   }

   return root;
}

bool Search(BstNode* root, int data)
{
   if (root == NULL)
        return FALSE ;
   else if (root->data == data )
        return TRUE;
   else if(data <= root->data)
        return Search(root->left , data);
   else
        return Search (root->right,data);
}

int main(){

BstNode* root = NULL;

root = Insert(root,20);
root = Insert(root,10);
root = Insert(root,30);
root = Insert(root,8);
root = Insert(root,12);
root = Insert(root,25);
root = Insert(root,40);

int data;

while(1){
printf("Enter the node to be searched: ");
scanf("%d",&data);

if (Search(root,data) == TRUE )
    printf("Found or 1\n");

else
    printf("Not Found or 0\n");
}

return 0;
}
