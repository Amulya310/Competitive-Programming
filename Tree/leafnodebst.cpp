#include<bits/stdc++.h>
using namespace std;
void leafnode(int a[],int n)
{
	bool flag;
	
	stack<int>s;
	for(int i=0,j=1;j<n;i++,j++)
	{
		if(a[i]>a[j])
		{
			s.push(a[i]);
		}
		else
		{
			while(!s.empty())
			{
				if(a[j]>s.top())
				{
					s.pop();
					flag=true;
				}
				else
				{
					break;
				}
			}

		}
		if(flag)
		{
			cout<<a[i]<<" ";
		}

	}

	cout<<a[n-1];
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

		leafnode(a,n);
		return 0;
	}
}