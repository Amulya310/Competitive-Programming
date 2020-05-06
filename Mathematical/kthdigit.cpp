#include<cmath>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,k;
	    cin>>a>>b>>k;
	    a=pow(a,b);
	    long long int x;
	    while(k--)
	    {
	        x=a%10;
	        a=a/10;
	    }
	    cout<<x<<endl;
	}
	return 0;
}