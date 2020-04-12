using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int temp=n;
	    long long int sum=0;
	    while(temp)
	    {
	        int x=temp%10;
	        sum=sum*10+x;
	        temp/=10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}