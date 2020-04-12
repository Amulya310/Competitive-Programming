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
	    long long int a[n];
		long long int k;
		cin>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<k)
			{
				int temp=a[i];
				int prev_digit=-1;
				if(temp%10 == a[i])
				{
					count++;
					continue;
				}
				int flag=0;
				while(temp)
				{
					int cuur_digit=temp%10;
					if(prev_digit==-1)
					{
						prev_digit=cuur_digit;
					}
					else
					{
						if(abs(prev_digit- cuur_digit) != 1)
						{
							flag=1;
							count++;
							break;
						}
					}
					prev_digit=cuur_digit;
					temp=temp/10;
				}
				if(flag!=1)
				{
					cout<<a[i]<<" ";
				}
				
			}
			else
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"-1";
		}
		cout<<endl;
	}
}