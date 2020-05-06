using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m;
	   cin>>n>>m;
	    int q = n/m;
    int n1 = m*q;
    int n2 = (n*m)>0?(m*(q+1)):(m*(q-1));
    if(abs(n-n1)<abs(n-n2))
    cout<<n1<<endl;
	else
	cout<<n2<<endl;
	}
	return 0;
}