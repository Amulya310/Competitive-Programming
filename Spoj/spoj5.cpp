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
		int p=(x+y)*2;
		int a=x*y;
		cout<<p<<" "<<a<<endl;

	}
}