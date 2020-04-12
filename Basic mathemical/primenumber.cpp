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
	    int i=2,flag=0;
	    while(i!=n)
	    {
	        if(n%i==0)
	        {
	            flag=1;
	            break;
	        }
	        i++;
	    }
	    if(!flag)
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