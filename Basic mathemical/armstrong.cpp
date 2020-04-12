using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int d=n;
	    int sum=0;
	    while(n!=0)
	    {
	        
	        int x=n%10;
	        sum+=x*x*x;
	        n=n/10;
	        //cout<<n<<" "<<sum<<endl;
	    }
	   if(sum==d)
	   {
	       cout<<"Yes"<<endl;
	   }
	   else
	   {
	       cout<<"No"<<endl;
	   }
	}
	return 0;
}