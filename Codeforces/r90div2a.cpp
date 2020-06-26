#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,ca,cb;
		cin>>a>>b>>c;
		if(a<c)
		{
			cout<<1<<" ";

		}
		else
		{
			cout<<-1<<" ";
		}
		if(b*a>c)
		{
			cout<<b;
		}
		else
		{
			cout<<-1;
		}
		cout<<"\n";

	}
	return 0;
}
