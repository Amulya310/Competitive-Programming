#include<iostream>
using namespace std;
#define MAX 36;
int W[MAX];
int f(int n){
    if(W[n]!=0) //It had already been calculated
        return W[n];
    else{
        if(n>=3)
            W[n]=f(n-3)+f(n-2)+f(n-1);
        else if(n==1 or n==2)
            W[n]=n;
        else //n == 0
            W[n]=1;
        //these last two are this: (n>>1)+1
    }
    return W[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<f(n)<<endl;
	}
}