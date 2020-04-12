int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int getHeight(struct node* node) {
    // Write your code here
    if(node==NULL)
    {
        return -1;
    }
        int lh=getHeight(node->left);
        int rh=getHeight(node->right);
         return 1 + max(lh,rh);
}