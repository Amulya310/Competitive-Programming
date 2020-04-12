#include<iostream>
#include<vector>
#include<algorithm>
#define RANGE 200
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int ans=0;
	std::vector<int> hg(RANGE+1);
	for(int i=0;i<d;i++)
	{
		hg[a[i]]=hg[a[i]]+1;
	}

	for(int i=d;i<n;i++)
	{
		int count=0;
		double median=0;
		int left=-1;
		int right=-1;
		int ca=a[i];
		for(int j=0;j<=RANGE;j++)
		{
			count+=j;
			if(d%2==1)
			{
				if(count>=d/2+1)
				{
					median=j;
					break;
				}
			}
			else
			{
				if(count==d/2)
				{
					left=j;
				}
				if(count>d/2 && left!=-1)
				{
					right=j;
					median=(left+right)/2.0;
					break;
				}
				if(count>d/2 && left==-1)
				{
					median=j;
					break;
				}
			}

		}
		if(ca>=2*median)
		{
			ans++;
		}
		hg[a[i-d]]=hg[a[i-d]]-1;
		hg[a[i]]=hg[a[i]]+1;
	}

	cout<<ans<<endl;

}