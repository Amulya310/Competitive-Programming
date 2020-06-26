#include<bits/stdc++.h>
using namespace std; 

long long int maxSubArraySum(long long int a[], long long int size) 
{ 

	int max_so_far = a[0]; 
	int curr_max = a[0]; 

	for (int i = 1; i < size; i+=2) 
	{ 
			curr_max = max(a[i], curr_max+a[i]); 
			max_so_far = max(max_so_far, curr_max); 
	} 
	return max_so_far; 
} 

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int res =maxSubArraySum(a,n);
		cout<<res<<endl;
	}
} 
