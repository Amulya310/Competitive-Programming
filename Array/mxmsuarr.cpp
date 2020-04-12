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
		int maxm_sum_near_end=a[0],final_max=a[0];
		for(int i=1;i<n;i++)
		{
			maxm_sum_near_end+=a[i];
			if(maxm_sum_near_end<a[i])
			{
				maxm_sum_near_end=a[i];
			}
			if(final_max<maxm_sum_near_end)
			{
				final_max=maxm_sum_near_end;
			}
		}
		cout<<final_max<<endl;
	}
}