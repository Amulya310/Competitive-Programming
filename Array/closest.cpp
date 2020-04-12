#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int i,just_smaller_no=a[0],just_greater_no=a[n-1];
		for(i=0;i<n-1;i++)
		{
			if(a[i]<m)
			{
				just_smaller_no=a[i];
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]>m)
			{
				just_greater_no=a[i];
			}
		}
		//cout<<just_greater_no<<just_smaller_no;
		int temp=abs(just_greater_no-m);
		int temp2=abs(m-just_smaller_no);
		if(temp2<temp)
		{
			cout<<just_smaller_no<<endl;
		}
		else
		{
			cout<<just_greater_no<<endl;
		}
		//cout<<endl;
	}
}