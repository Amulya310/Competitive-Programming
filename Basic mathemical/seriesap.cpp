using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int a,b;
         cin>>a>>b;
         int x;
         cin>>x;
         int d=b-a;
         cout<<(a+(x-1)*d)<<endl;
     }
	//code
	return 0;
}