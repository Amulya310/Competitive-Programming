#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>1)
			{
				count++;
			}
		}
		if(count<=k)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}