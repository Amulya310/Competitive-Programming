#include<stdio.h>
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* newNode(int newdata)
{
	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node)):
	newNode->data = newdata;
	newNode->left = null;
	newNode->right = null;
	return newNode;
}
struct Node* insertion(struct Node* root, int a[],int i,int n)
{
	if(i<n)
	{
		struct Node* temp = newNode(a[i]);
		root = temp;
		root->left = insertion(root->left,a,2*i+1,n);
		root->right = insertion(root->right,a,2*i+2,n);
	}
	return root;
}
void inorder(struct Node* root)
{
	if(root!=null)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	Struct Node *root=null;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	root = insertion(root,a,0,n);


}