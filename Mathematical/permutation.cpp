using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long int p,r;
	    cin>>p>>r;
	    long int sum=1;
	    for(long int i=0;i<r;i++)
	    {
	       sum*=p;
	       p=p-1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}