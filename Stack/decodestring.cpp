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
		int l=s.length();

		stack<int>v1;
		stack<char>va;
		string temp="";
		string result="";
		int count=0;
		for(int i=0;i<l;i++)
		{
			count=0;
			if(s[i]>='0' && s[i]<='9')
			{
				while(s[i]>='0' && s[i] <='9')
				{
					count = count* 10 +s[i] -'0';
					i++;
				}
				i--;
				v1.push(s[i]-47);
			}
			else if(s[i]=='[')
			{
				if(s[i-1]>='0' && s[i-1]<='9' )
				{
					va.push(s[i]);
				}
				else
				{
					va.push(s[i]);
					v1.push(1);
				}
			}
			else if(s[i]==']')
			{
				temp="";
				count=0;
				if(!v1.empty())
				{
					count = v1.top();
					v1.pop();
				}
				while(!va.empty() && va.top()!='[')
				{
					temp = va.top() + temp;
					va.pop();
				}
				if(!va.empty() && va.top() == '[')
				{
					va.pop();
				}
				for(int j=0;j<count;j++)
				{
					result+=temp;
				}
				for(int j=0;j<result.length();j++)
				{
					va.push(result[j]);
				}

				result = "";
			}
			else
			{
				va.push(s[i]);
			}
		}
		while(!va.empty())
		{
			result=va.top() + result;
			va.pop();
		}
		cout<<result<<endl;
	}
}