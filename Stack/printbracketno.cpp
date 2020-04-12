#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack <int> v;

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;

		int l=s.length();
		int k=1;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='(')
			{
				v.push(k);
				cout<<k<<" ";
				k++;
			}
			else if(s[i]==')')
			{
				cout<<v.top()<<" ";
				v.pop();
				
			}
		}
		cout<<endl;
	}
}