#include<bits/stdc++.h>
using namespace std;
bool check_square(int n)
{
	float sq=sqrt(n);
	//cout<<sq;
	if(sq-floor(sq)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=(int)s[i];
		}
		if(check_square(sum))
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}