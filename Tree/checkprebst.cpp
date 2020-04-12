#include<bits/stdc++.h>
using namespace std;
bool checkpre(int a[],int n)
{
	int root=INT_MIN;
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		if(a[i]<root)
		{
			return false;
		}

		while(!s.empty() && s.top()<a[i])
		{
			root=s.top();
			s.pop();
		}
		s.push(a[i]);
	}
	return true;
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

		if(checkpre(a,n))
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}