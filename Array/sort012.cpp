#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int cz=0,co=0,ct=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
				cz++;
			else if(a[i]==1)
				co++;
			else
				ct++;
		}
		for(int i=0;i<cz;i++)
		{
			cout<<"0"<<" ";
		}
		for(int i=0;i<co;i++)
		{
			cout<<"1"<<" ";
		}
		for(int i=0;i<ct;i++)
		{
			cout<<"2"<<" ";
		}
	}
	cout<<endl;
}