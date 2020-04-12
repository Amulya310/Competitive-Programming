#include<bits/stdc++.h>
using namespace std;
void firstnegative(int a[],int n,int k)
{
	deque<int>d;
	int i;
	for(i=0;i<k;i++)
	{
		if(a[i]<0)
		{
			d.push_back(i);
		}
	}
	for( ; i<n;i++)
	{
		if(!d.empty())
		{
			cout<<a[d.front()]<<" ";
		}
		else
		{
			cout<<"0"<<" ";
		}

		while(!d.empty() && d.front() < (i - k + 1))
		{
			d.pop_front();
		}

		if(a[i]<0)
		{
			d.push_back(i);
		}


	}
	if(!d.empty())
        cout << a[d.front()] << " ";
    else
        cout << "0" << " ";
}
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
		int k;
		cin>>k;

		firstnegative(a,n,k);
		
		cout<<endl;

	}
}