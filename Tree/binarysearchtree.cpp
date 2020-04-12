#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node *left,*right;
};
struct node *newNode(int item)
{
	struct node *temp= (struct node *)malloc(sizeof(struct node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d \n",root->key);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d \n",root->key);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		
		preorder(root->left);
		preorder(root->right);
		printf("%d ",root->key);
	}
}
struct node* insert(struct node *node,int key)
{
	if(node==NULL)
		return newNode(key);
	if(key < node->key)
	{
		node->left = insert(node->left,key);
	}
	else if(key > node->key)
	{
		node->right=insert(node->right,key);
	}

	return node;
}
int main()
{
	struct node *root = NULL;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		if(i==0)
		{
			root = insert(root,temp);
		}
		
		insert(root,temp);
	}
	cout<<"inorder : ";
	inorder(root);
	cout<<endl;
	cout<<"preorder : ";
	preorder(root);
	cout<<endl;
	cout<<"postorder : ";
	postorder(root);
	cout<<endl;
	return 0;
}