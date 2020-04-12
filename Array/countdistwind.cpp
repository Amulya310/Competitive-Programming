#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
void countDistinct(int a[], int k, int n)
{
	
	int temp = n-k+1;
	int countDistinct=0;
	//cout<<temp<<endl;
	for(int i=0;i<temp;i++)
	{
		unordered_map<int ,int > map;
		for(int j=i;j<(i+k);j++)
		{

			//cout<<a[j]<<"-----"<<endl;
			if(map[a[j]]== 0)
			{
				countDistinct++;
			}
			//cout<<countDistinct<<" ";
			map[a[j]]++;
		}
		cout<<countDistinct<<" ";
		countDistinct=0;
	}
    //Your code here
}