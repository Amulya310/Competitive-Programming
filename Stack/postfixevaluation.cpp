#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack <int> v;
		string s;
		cin>>s;
		int l=s.length(),k,j,z=0;

		for(int i=0;i<l;i++)
		{
			if(s[i]>= 48 && s[i] <= 57)
			{
				v.push(s[i] - '0');
			}
			else if(s[i]== '+' || s[i]== '-' || s[i]== '*' || s[i] == '/')
			{
				k=v.top(); v.pop();
				j=v.top(); v.pop();
				if(s[i] == '+')
				{
					z=j+k;
				}
				if(s[i]=='-')
				{
					z=j-k;
				}
				if(s[i] == '*')
				{
					z = j*k;
				}
				if(s[i]== '/')
				{
					z = j/k;
				}

				v.push(z);

			}
		}
		cout<<v.top()<<endl;
	}
}