#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int flag=0;
		for(int i=1;pow(i,n)<=m;i++)
		{
			if(pow(i,n)==m)
			{

				cout<<i<<endl;
				flag++;
			}
		}
		if(flag==0)
			cout<<"-1"<<endl;
	}	
}