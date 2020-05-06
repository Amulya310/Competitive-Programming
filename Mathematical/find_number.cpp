#include<bits/stdc++.h>
using namespace std;
bool dis(int x,int d)
{
	while(x>0)
	{
		if(x%10==d)
		{
			break;
		}
		x=x/10;
	}
	return(x>0);
}
int main()
{
	int t,flag=0;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		if(d>n)
		{
			flag=0;
		}
		else
		{
			if(d==0)
			{
				cout<<"0 ";
				flag=1;
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(j==d || dis(j,d))
			{
				cout<<j<<" ";
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"-1";
		}
		cout<<endl;
	}
}