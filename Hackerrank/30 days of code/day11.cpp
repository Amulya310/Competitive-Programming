#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	/*for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int result[4][4];
	int sum=0;
	for(int i=1;i<=4;i++)
	{
		
		for(int j=1;j<=4;j++)
		{
			sum+=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];//cout<<"1."<<sum<<" "<<endl;
			sum+=a[i][j];//cout<<"2."<<sum<<" "<<endl;
			sum+=a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];//cout<<"3."<<sum<<" "<<endl;
			result[i-1][j-1]=sum;
			sum=0;
		}
	}
	int max=result[0][0];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(max<result[i][j])
			{
				max=result[i][j];
			}
			//cout<<result[i][j]<<" ";
		}	
	}
	cout<<max<<endl;

}