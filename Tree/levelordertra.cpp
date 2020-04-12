#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* newNode(int newdata)
{
	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = newdata;
	newNode->left = NULL;
	newNode->right = NULL;
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
void preorder(struct Node* root)
{
	if(root!=NULL)
	{
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct Node *root )
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}
void inorder(struct Node* root)
{
	if(root!=NULL)
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
	Node *root=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	root = insertion(root,a,0,n);
	preorder(root);cout<<endl;
	inorder(root);cout<<endl;
	postorder(root);

}