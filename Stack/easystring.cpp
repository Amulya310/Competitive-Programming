#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int v[26]={0};
		stack <int> stk;
		string s;
		cin>>s;

		int l= s.length();
		for(int i=0;i<l;i++)
		{
			if(s[i]<=90 && s[i]>= 65)
			{
				s[i] = s[i] + 32;
			}
		}

		//cout<<s;
		int count=0,n=0;
		for(int i=0;i<l;i++)
		{
			if(!stk.empty() && stk.top() == s[i])
			{
				stk.push(s[i]);
				count ++;
				n++;
			}
			else
			{
				if(!stk.empty () && stk.top()!= s[i])
				{
					char x=stk.top();
					cout<<count<<x;
					stk.push(s[i]);
					count=1;
					n++;
				}
				else if(stk.empty())
				{
					stk.push(s[i]);
					count=1;
					n++;
				}
			}
		}

		if(l==1 || l==n)
		{
			char x=stk.top();
			cout<<count<<x;
		}
		cout<<endl;
	}
}