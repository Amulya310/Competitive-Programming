#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool a[n+1];
		int c[n+1];
		memset(a,true,sizeof(a));

		for(int i=2;i<sqrt(n);i++)
		{
			if(a[i]==true)
			{
				for(int p=i*i;p<=n;p+=i)
				{
					a[p]=false;
				}
			}
		}
		int k=0;
		for(int i=2;i<=n;i++)
		{
			if(a[i]==true)
			{
				c[k]=i;
				k++;
			}
		}
		int sum=0;
		for(int i=0;i<k;i++)
		{
			sum+=c[i];
		}
		cout<<sum<<endl;
	}
}