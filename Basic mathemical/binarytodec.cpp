using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long int num = n; 
    long int dec_value = 0; 
      
    // Initializing base value to 1, i.e 2^0 
    long int base = 1; 
      
    long int temp = num; 
    while (temp) 
    { 
        long int last_digit = temp % 10; 
        temp = temp/10; 
          
        dec_value += last_digit*base; 
          
        base = base*2; 
    } 
	    cout<<dec_value<<endl;
	}
	return 0;
}