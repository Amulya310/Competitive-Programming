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
	    long int sum=0;
	    while(n!=0)
	    {
	        int x=n%10;
	        sum+=x;
	        n=n/10;
	    }
	   //cout<<sum<<endl;
	   long int z=0;
	   long int temp=sum;
	   while(sum!=0)
	   {
	       int x=sum%10;
	       z=z*10+x;
	       sum=sum/10;
	   }
	   if(z==temp)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   {
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}