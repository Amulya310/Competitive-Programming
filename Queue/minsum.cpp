#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		queue<int>q1;
		queue<int>q2;

		sort(a,a+n);
		int k=0,l;
		for(int i=0;i<n;i++)
		{
			
			if(i==2*k)
			{
				q1.push(a[i]);
				k++;
				//cout<<a[i]<<" ";
			}
			else
			{
				q2.push(a[i]);
				//cout<<a[i]<<" ";
			}
		}
		int no1=0,no2=0;
		while(!q1.empty())
		{
			no1= 10 * no1+ q1.front();
			q1.pop();
		}
		while(!q2.empty())
		{
			no2 = 10 * no2 + q2.front();
			q2.pop();
		}

		cout<<no2+no1<<endl;
	}
}