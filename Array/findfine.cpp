#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int a[n],p[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		int fine =0;
		if(d%2==0)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]%2 !=0)
				{
					fine +=p[i];
				}
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]%2 ==0)
				{
					fine +=p[i];
				}
			}
		}
		cout<<fine<<endl;
	}
	return 0;
}