#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
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
		int max=a[n-1];
		stack<int>s;
		s.push(max);
		for(int i=n-2;i>=0;i--)
		{
			if(max<=a[i])
			{
				//cout<<max<<endl;
				max=a[i];
				s.push(max);
			}
		}
		while(s.size()!=0)
		{
			int temp=s.top();
			cout<<temp<<" ";
			s.pop();
		}
		//cout<<s.top();
		//cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}