#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

struct BstNode{
       int data;
       struct BstNode* right;
       struct BstNode* left;
};

struct BstNode* root;

struct BstNode* GetNewNode(int data){
struct BstNode* newNode = malloc(sizeof(struct BstNode));
newNode->data = data;
newNode->right = newNode->left = NULL;

return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data){

   if(root == NULL)
   {
      root = GetNewNode(data);
   }
   else if (data <= root->data)
   {
      root->left = Insert(root->left,data);
   }
   else
   {
      root->right = Insert(root->right,data);
   }

   return root;
}

bool Search(struct BstNode* root, int data)
{
    if(root == NULL)
        return FALSE;
    else if(root->data == data)
        return TRUE;
    else if(root->data <= data)
        return Search(root->right,data);
    else
        return Search(root->left,data);
}

int main()

{
    struct BstNode* root = NULL;

    root = Insert(root,20);
    root = Insert(root,30);
    root = Insert(root,10);
    root = Insert(root,12);
    root = Insert(root,25);
    root = Insert(root,40);
    root = Insert(root,8);

    int data;

    while(1)
    {
       printf("Enter the number to be searched in the BST: ");
       scanf("%d",&data);

       if (TRUE == Search(root,data))
       {
           printf("Found or 1\n");
       }
       else
       {
           printf("Not Found or 0\n");
       }
    }

    return 0;
}
