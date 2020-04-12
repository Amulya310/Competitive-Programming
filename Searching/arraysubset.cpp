#include<bits/stdc++.h>
using namespace std;
int search(int a[],int n,int x)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
	return flag;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;

		int a[n],b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		int count =0;
		for(int i=0;i<m;i++)
		{
			int y=search(a,n,b[i]);
			if(y==1)
			{
				count++;
			}
		}
		if(count==m)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}