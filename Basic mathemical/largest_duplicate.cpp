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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int index=-1,temp;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				index=i+1;
				temp=a[i+1];
			}
		}
		if(index==-1)
		{
			cout<<index<<endl;
		}
		else
		{
			cout<<index<<" "<<temp<<endl;
		}
	}
}