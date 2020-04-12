#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int main()
{
	ll n,r;
	cin>>n>>r;
	map<ll,ll> mp2,mp3;
	int val,count=0;
	while(n--)
	{
		cin>>val;
		if(mp3.count(val))
		{
			//cout<<"----1------"<<endl;
			//cout<<val<<" "<<endl;
			//cout<<mp3[val]<<" "<<endl;
			count+=mp3[val];
			//cout<<count<<" "<<endl;
		}
		if(mp2.count(val))
		{
			//cout<<"----2------"<<endl;
			//cout<<val<<" "<<endl;
			//cout<<mp2[val]<<" "<<endl;
			mp3[val*r]+=mp2[val];
			//cout<<mp3[val*r]<<" "<<endl;
		}
		mp2[val*r]++;
		//cout<<val*r<<mp2[val*r]<<" "<<endl;
	}
	cout<<count<<endl;
}