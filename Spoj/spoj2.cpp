#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float x,y;
		cin>>x>>y;
		if(y==0)
		{
			cout<<"denominator cannot be zero"<<endl;
			continue;
		}
		float z=x/y;
		cout<<z<<endl;
	}
}