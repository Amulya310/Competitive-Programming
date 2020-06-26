#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
	int count=0;
	while(n!=0)
	{
		//cout<<(n<<1);
		n=(n & (n<<1));
		cout<<n<<endl<<count<<endl;
		count++;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<func(n)<<endl;
}