#include<bits/stdc++.h>
using namespace std;
bool checkin(int a[],int n)
{
	if(n==0 || n==1)
	{
		return true;
	}
	for(int i=1;i<n;i++)
	{
		//cout<<a[i]<<a[i-1]<<endl;
		if(a[i]<=a[i-1])
		{
			return false;
		}
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

		if(checkin(a,n))
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}