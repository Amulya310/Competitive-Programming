#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    int n,count=0;;
	    n=a^b;
	    while(n)
	    {
	        count+= n & 1;
	        cout<<count<<" "<<n<<endl;
	        n>>=1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}