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

		priority_queue<int ,vector<int>, greater<int> >pq(a,a+n);

		int res=0;
		while(pq.size()>1)
		{
			int f;
			f=pq.top();
			pq.pop();
			int s;
			s=pq.top();
			pq.pop();

			res+= f+s;
			pq.push(f+s);
		}
		cout<<res<<endl;
	}
}