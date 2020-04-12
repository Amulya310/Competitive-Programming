#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool flag[n+1];
		memset(flag,true,sizeof(flag));
		for(int i=2;i<sqrt(n);i++)
		{	
			if(flag[i])
			{
				for(int p=i*i;p<=n;p+=i)
				{
					flag[p]=false;
				}
			}
		}
		 int sum = 0; 
    for (int i = 2; i <= n; i++) 
        if (flag[i]) 
            sum += i;

        cout<<sum<<endl;
	}

	return 0;
}