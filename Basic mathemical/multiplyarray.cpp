#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag=0;
	cin>>t;
	while(t--)
	{
		int n,sum1=0,sum2=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n/2;i++)
		{
			sum1+=a[i];
		}
		//cout<<sum1;
		for(int i=n/2;i<n;i++)
		{
			sum2+=a[i];
		}
		cout<<sum1*sum2<<endl;
	}
}