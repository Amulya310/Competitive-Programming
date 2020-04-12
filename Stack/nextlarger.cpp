#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>l;
		int s[l];
		for(int i=0;i<l;i++)
		{
			cin>>s[i];
		}

		int a[l];
		for(int i=0;i<l;i++)
		{	
			for(int j=i+1;j<l;j++)
			{
				if(s[j]>s[i])
				{
					a[i]=s[j];
					break;
				}
				else
				{
					a[i]=-1;
				}
			}
			if(i==l-1)
			{
				a[i]=-1;
			}

		}
		for(int i=0;i<l;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}