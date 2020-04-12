#include<bits/stdc++.h>
using namespace std;
int binary_search(int A[],int left,int right,int key)
{
	int mid = left+ (right - left)/2;
	if(right>=left){
	if(a[mid]==key)
	{
		return mid;
	}
	if(a[mid]>key){
		return binary_search(a,left,mid-1,key);
	}
	if(a[mid]<key){
		return binary_search(a,mid+1,right,key);
	}
}
	return -1;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int key;
		cin>>key;
		cout<<binary_search(a,0,n-1,key)<<endl;
	}
}