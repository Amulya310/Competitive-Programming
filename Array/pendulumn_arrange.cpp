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
		int min;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int c[n];
		int mid=(n-1)/2;
		c[mid]=a[0];
		int j=1,i=1;
		for(i=1;i<=mid;i++)
		{
			c[mid+i]=a[j++];
			c[mid-i]=a[j++];

		}
		if(n%2==0)
		{
			c[mid+i]=a[j];
		}
		for(i=0;i<n;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}