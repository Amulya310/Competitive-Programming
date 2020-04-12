#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
}
int last(int arr[], int low, int high, int x, int n) 
{ 
    if (high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x) 
            return mid; 
        else if (x < arr[mid]) 
            return last(arr, low, (mid -1), x, n); 
        else
            return last(arr, (mid + 1), high, x, n); 
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
		int x;
		cin>>x;
		int f=first(a, 0, n-1, x, n);
		int l = last(a, 0, n-1, x, n);
		if(l ==-1 || f==-1){
		cout<<f<<endl;
	}
	else
	{
	    cout<<f<<" "<<l<<endl;
	}
	}
}