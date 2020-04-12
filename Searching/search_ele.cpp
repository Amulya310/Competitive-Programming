#include<bits/stdc++.h>
using namespace std;
int search(int a[],int x,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return i;
		}
	}
	return -1;
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
		int x;
		cin>>x;
		cout<<search(a,x,n)<<endl;

	}
}