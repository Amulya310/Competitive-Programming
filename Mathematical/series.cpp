#include<cmath>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b;
	    int n;
	    cin>>n;
	    float r=b/a;
	    r=pow(r,n-1);
	    cout<<floor(a*r)<<endl;
	}
	return 0;
}