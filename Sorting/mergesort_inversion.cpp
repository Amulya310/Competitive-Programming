#include <bits/stdc++.h>
using namespace std;
/*
The maximum number of inversions that an
n-size array can have is 
    n*(n-1) / 2
*/

long long int count_inversion_merge(long long int array[], long long int first, long long int last)
{
    long long int mid = (first+last)/2;
    long long int ai = first;
    long long int bi = mid+1;
    long long int final[last-first+1], finali=0;
    long long int inversion = 0, i;

    while (ai <= mid && bi <= last) {
        if (array[ai] <= array[bi]) {
                final[finali++] = array[ai++];
        } else {
                final[finali++] = array[bi++];
                inversion += mid - ai + 1;
        }
    }

    while (ai <= mid)
        final[finali++] = array[ai++];

    while (bi <= last) 
        final[finali++] = array[bi++];

    for (i=0 ; i<last-first+1 ; i++)
        array[i+first] = final[i];      

    return inversion;
}

long long int count_inversion(long long int array[], long long int a, long long int b)
{
    long long int x, y, z, mid;
    if (a >= b) return 0;

    mid = (a+b)/2;
    
    x = count_inversion(array, a, mid);
    y = count_inversion(array, mid+1, b);
    z = count_inversion_merge(array, a, b);

    return x+y+z;
} 
int main()
{
	long long int t;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	long long int a[n],temp[n];

	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int inversion=count_inversion(a,0,n-1);
	cout<<inversion<<endl;
}
}