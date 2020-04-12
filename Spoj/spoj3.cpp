#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x>y)
		{
			cout<<x<<" is greater than "<<y<<endl;
		}
		else if(x<y)
		{
			cout<<x<<" is smaller than "<<y<<endl;
		}
		else
		{
			cout<<"n is equal m: "<<y<<endl;
		}
	}
}