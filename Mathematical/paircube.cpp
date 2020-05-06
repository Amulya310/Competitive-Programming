#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int a=1;a<=n;a++)
		{
			for(int b=0;b<=n;b++)
			{
				if((a*a*a)+(b*b*b)==n)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}