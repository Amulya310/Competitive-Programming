#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int low,int high,int x)
{
	int mid = low+ (high -low)/2;
	if(low<=high)
	{
		if(a[mid]==x)
		{
			return mid;
		}
		if(a[mid]>x)
		{
			return binary_search(a,low,mid-1,x);
		}
		else
		{
			return binary_search(a,mid+1,high,x);
		}
	}
}
int findExtra(int a[],int b[],int n)
{
	int sum=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			sum+=b[i];
		}
		for(int i=0;i<n-1;i++)
		{
			cin>>a[i];
			sum2+=a[i];
		}
	int key = sum - sum2;
	cout<<binary_search(b,0,n-1,key)<<endl;
 //add code here.
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n-1],b[n];
		
		findExtra(a,b,n);
		
	}
}