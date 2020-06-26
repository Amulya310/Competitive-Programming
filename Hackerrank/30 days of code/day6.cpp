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
		char c[l],m[l];
		int k=0,j=0;
		for(int i=0;i<l;i++)
		{
			if(i%2==0)
			{
				c[k]=s[i];
				k++;			}
			else
			{
				m[j]=s[i];
				j++;
			}
		}
		for(int i=0;i<k;i++)
		{
			cout<<c[i];
		}
		cout<<" ";
		for(int i=0;i<j;i++)
		{
			cout<<m[i];
		}
		cout<<endl;
	}
}