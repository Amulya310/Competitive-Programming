#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
void linearsearch(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"key element is present at index :  "<<i<<endl;
		}
	}
}
int binarysearch(int a[],int left,int right,int key)
{
	
	if(right>=left)
	{
		int mid=(left+right)/2;
		if(a[mid]==key)
		{
			cout<<"key element is present at index :  "<<mid<<endl;
		}
		if(a[mid]>key)
			return binarysearch(a,left,mid-1,key);
		if(a[mid]<key)
			return binarysearch(a,mid+1,right,key);
	}
}
void jumpsearch(int a[],int n,int key)
{
	int s=sqrt(n);
	int prev=0;
	while(a[prev]<key)
	{
		if(a[s]>key || key>=n)
		{
			break;
		}
		else
		{
			prev = s;
			s+=sqrt(n);
		}
	}
	while(a[prev]<key)
	{
		prev++;
	}
	if(a[prev]==key)
	{
		cout<<"key element is present at index :  "<<prev<<endl;
	}
}
void interpolationsearch(int a[],int n,int key)
{
	int low=0,high=(n-1);
	while(low<=high && key>=a[low] && key<=a[high])
	{
		int pos = low + (((double)(high-low) /(a[high]-a[low]))*(key - a[low]));
		if(a[pos]==key)
		{
				cout<<"key element is present at index :  "<<pos<<endl;
		}
		if(a[pos]<key)
		{
			low = pos +1;
		}
		else
		{
			high = pos-1;
		}
	}
}
int exponentialsearch(int a[],int n,int key)
{
	if(a[0]==key)
	{
		cout<<"key element is present at index :  0"<<endl;
	}
	int i=1;
	while(i<n && a[i]<=key)
	{
		i=i*2;
	}
	int min;
	if(i>n)
	{
		min=n;
	}
	else
	{
		min=i;
	}
	return binarysearch(a,i/2,min,key);
}
void Searching(int a[],int n,int key,int value)
{
	switch(value)
	{
		case 1:
		cout<<"Using Linear Search Algorithm ";
		linearsearch(a,n,key);
		break;

		case 2:
		cout<<"Using Binary Search Algorithm ";
		binarysearch(a,0,n-1,key);
		break;

		case 3:
		cout<<"Using Jump Search Algorithm ";
		jumpsearch(a,n,key);
		break;
		
		case 4:
		cout<<"Using Interpolation Search Algorithm ";
		interpolationsearch(a,n,key);
		break;
		
		case 5:
		cout<<"Using Exponential Search Algorithm";
		exponentialsearch(a,n,key);
		break;
		default:
		break;
	}
}
int main()
{
	while(1)
	{

		int value;
		cout<<"Select Searching Algorithm to use (for e.g. Press 1 for Linear Search)";
		cout<<"\n1. Linear Search\n2. Binary Search\n3. Jump Search\n4. Interpolation Search\n5. Exponential Search\n\n6. Exit\n";
		cin>>value;
		if(value==6)
		{
			exit(1);
		}
		cout<<"Enter Size Of Array:- ";
		int n;
		cin>>n;
		int a[n];
		cout<<"Enter the Elements of Array:-   ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int key;
		cout<<"enter the key to be Search :   ";
		cin>>key;
		Searching(a,n,key,value);
	}
}
