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
		if(x<=0 || y<=0){
			cout<<"the length of rectangular's edge must be greater than 0"<<endl;
		continue;
		}
		cout<<2*(x+y)<<" "<<x*y<<endl;

	}
}