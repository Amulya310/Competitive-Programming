#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		//cout<<a[i]<<" ";
		//cout<<sum<<endl;
		if(sum>=k)
		{
			//cout<<"in";
			cout<<count<<endl;
			//cout<<sum-a[i]<<endl;
			break;
		}
		count++;
		
		
	}
	//cout<<sum<<endl;	

}
