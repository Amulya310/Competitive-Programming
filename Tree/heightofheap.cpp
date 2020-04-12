#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n;i++)
		{
			//cout<<pow(2,i)<<" ";
			//cout<<pow(2,(i+1))-1<<endl;
			if(n>=pow(2,i) && n<=(pow(2,(i+1))-1))
			{
				cout<<i<<endl;
				break;
			}
		}
	}
}