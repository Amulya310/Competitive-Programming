#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli x,y;
		cin>>x>>y;
		if(x<y)
		{
			lli temp=x;
			x=y;
			y=temp;
		}
		lli c=0;
		while(x!=y)
		{
			++c;
			if(x>y)
			{
				x=x>>1;
				//cout<<x<<endl;
			}
			//cout<<c<<endl;
			if(x<y)
			{
				y=y>>1;
				//cout<<y<<endl;
				 ++c;

			}
			//cout<<c<<endl;
		}
		cout<<c<<endl;
	}
}