#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int sum=0;
		for(long long int i=2;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				if(i*i!=n)
				{
					cout<<"1."<<sum<<endl;
					sum+=i+n/i;
					cout<<"2."<<sum<<endl;
				}
				else
				sum+=i;
			}
		}
		//cout<<sum<<endl;
		if(sum+1==n)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}