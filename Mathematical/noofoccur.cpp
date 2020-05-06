#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,flag=0;
	cin>>t;
	while(t--)
	{
		long int n,d,count=0;
		cin>>n>>d;
		long int a[n];
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==d)
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<count<<endl;
		}
		
	}
}
