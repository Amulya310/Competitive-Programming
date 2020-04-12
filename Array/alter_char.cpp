#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.size();
		int count=0;
		for(int i=0;i<len-1;i++)
		{
			if(s[i]=='A' && s[i+1]=='A')
			{
				count++;
			}
			else if(s[i]=='B' && s[i+1]=='B')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}