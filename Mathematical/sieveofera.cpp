#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool mark[n];
		memset(mark,true,sizeof(mark));
		for(int i=2;i<sqrt(n);i++)
		{
			if(mark[i]==true)
			{
				for(int p=i*i;p<=n;p+=i)
			{
				mark[p]=false;
			}
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(mark[i])
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}