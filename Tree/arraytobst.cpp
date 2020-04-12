#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right; 
};
struct Node* newNode(int new_data)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=new_data;
	node->left=NULL;
	node->right=NULL;

	return node;
}
struct Node* sortedarraytobst(int a[],int start,int end)
{
	if(start<end)
	{
		return NULL;
	}
	int mid = (start + end)/2;
	struct Node *root= newNode(a[mid]);
	root->left=sortedarraytobst(a,start,mid-1);
	root->right=sortedarraytobst(a,mid+1,end);
	return root;
}

void preOrder(struct Node* node)
{
	if(node==NULL)
	{
		return;
	}
	printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		struct Node *root = sortedarraytobst(a,0,n-1);
		preOrder(root);
	}
}