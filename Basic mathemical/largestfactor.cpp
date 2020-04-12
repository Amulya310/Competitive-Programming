#include<iostream>
#include <cmath>
#include<cstring>
using namespace std;
long long int maxprime(long long int n)
{
	long long int maxp=-1;
	while(n%2==0)
	{
		maxp=2;
		n >>=1;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			maxp=i;
			n=n/i;
		}
	}
	if(n>2)
		maxp=n;
	return maxp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		cout<<maxprime(num)<<endl;
	}
}