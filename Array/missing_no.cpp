using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0,sum=0;
		cin>>n;
		int a[n];
		int temp=n;
		for(int i=0;i<temp-1;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}

		cout<<((n*(n+1))/2)-sum<<endl;
	}
}