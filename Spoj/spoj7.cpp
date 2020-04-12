#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005]={0};
int main()
{
	ll t;
	cin>>t;
	ll i=0,c=0,cn=0,count=0;
	while(t--)
	{

		string s;
		cin>>s;
		ll length=s.size();
		for(i=0;i<length;i++)
		{
			if(s[i]=='s')
			{
				a[i]=c;
				count+=a[i];
				cn++;
			}
			else if(s[i]=='m'){
				a[i]=cn;
				c+=a[i];
			}
		}
		
		cout<<count<<endl;
		a[i]=0;
		count=0;
		cn=0;
		c=0;

	}
}