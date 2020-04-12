#include<bits/stdc++.h>
using namespace std;
int binarynum(int n)
{
	if(n==0)
	{
		return 0;

	}
	else{
		return n%2 + 10* binarynum(n/2);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int bin=binarynum(i);
			cout<<bin<<" ";
		}
	}
}