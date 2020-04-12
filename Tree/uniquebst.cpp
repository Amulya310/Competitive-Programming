#include<bits/stdc++.h>
using namespace std;
long int calculate(long long int n)
{
	if(n<=1)
	{
		return 1;
	}
	long long int c=0;
	for(long long int i=0;i<n;i++)
	{
		c+=calculate(i)*calculate(n-i-1);
	}
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			cout<<calculate(n)<<endl;
		}
}