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
	    long int sum=1;
	    while(n)
	    {
	        sum*=n;
	        n--;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}