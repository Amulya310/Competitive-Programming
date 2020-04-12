#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	pair<int,int>arrpos[n];

	for(int i=0;i<n;i++)
	{
		arrpos[i].first= a[i];
		arrpos[i].second=i;
	}

	sort(arrpos,arrpos+n);
	/*for(int i=0;i<n;i++)
	{
		cout<<arrpos[i].first<<" "<<arrpos[i].second;
		cout<<endl;	
	}*/

	vector<bool>vis(n,false);

	int ans=0;

	for(int i=0;i<n;i++)
	{
		if(vis[i]||arrpos[i].second==i)
		{
			/*cout<<arrpos[i].second;
			cout<<"in"<<i;
			*/continue;
		}
		int cycle_size=0;
		int j=i;
		while(!vis[j])
		{
			//cout<<"j"<<j<<endl;
			vis[j]=1;
			//cout<<"arrpos[i].second"<<arrpos[i].second<<endl;
			j=arrpos[j].second;
			//cout<<"cycle_size"<<cycle_size<<endl;
			cycle_size++;
		}
		ans+=cycle_size-1;
	}
	cout<<ans<<endl;

}