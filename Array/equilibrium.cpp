#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
	    scanf("%d",&n);
		int a[n];
		int sum=0,lsum=0,rsum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		int flag=0;
		if(n==1)
		{
			printf("1");
			flag=1;
		}
		else
		{
			lsum=a[0];
			for(int i=1;i<n;i++)
			{
				rsum=sum-a[i]-lsum;
				if(lsum==rsum)
				{
					printf("%d ",i+1);
					flag=1;
				}

				lsum+=a[i];
				//cout<<lsum<<rsum<<endl;
				

			}
		}
		if(flag!=1)
		{
			printf("-1");
		}
		
		printf("\n");
	}

}