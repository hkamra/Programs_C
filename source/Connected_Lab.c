int search(struct node *root, int val)
{
    while (root != NULL)
    {
        if (val > root->a)
        {
            return search(root->right, val);
        }
        else if (val < root->a)
        {
            return search(root->left, val);
        }
        else
        {
            return 1;
        }
    }
 
    return 0;
}
