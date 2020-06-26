#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		int len = s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='0')
			{
				count++;
			}
		}
		int a=len-count;
		int x;
		if(a>count)
		{
			x= count;
		}
		else
		{
			x=a;
		}
		if(x%2==1)
		{
			cout<<"DA"<<endl;
		}
		else
		{
			cout<<"NET"<<endl;
		}
	}
	return 0;
}


