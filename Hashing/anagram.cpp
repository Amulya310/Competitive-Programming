#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,p;
		cin>>s;
		int count=0;
		for(int i=1;i<s.size();i++)
		{
			map<string,int> mp;
			for(int j=0;j<s.size()-i+1;j++)
			{
				p=s.substr(j,i);
				sort(p.begin(),p.end());
				//cout<<p<<endl;
				mp[p]++;
				//cout<<mp[p];
			}
			for(auto x:mp)
			{
				if(x.second>1)
				{
					//cout<<x.second;
					count+=((x.second-1)*(x.second))/2;
					//cout<<count<<endl;
				}
			}
		}
		cout<<count<<endl;
	}

}