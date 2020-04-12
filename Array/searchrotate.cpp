#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	    long long int a[n];
	    
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long int x,f,index;
	    cin>>x;
	    for(long long int i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        {
	            f=1;
	            index=i;
	            break;
	        }
	        else{
	            f=0;
	        }
	    }
	    if(f==1)
	    {
	        cout<<index;
	    }
	    else
	    {
	        cout<<"-1";
	    }
	    cout<<endl;
	}
	return 0;
}