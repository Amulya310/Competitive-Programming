#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag=0;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		string s;
		cin>>s;
		long long int sum=0;
		for(long int i=0;i<n;i++)
		{
			sum+=(int)s[i];
		}
		//cout<<sum<<endl;
		for(int i=2;i<=sqrt(sum);i++)
		{
			if(sum%i==0)
			{
				//cout<<i;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}