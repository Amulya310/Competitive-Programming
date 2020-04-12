#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(v[i]<v[j])
				{
					//cout<<"yes";
					flag=1;
					break;
				}
			}
			if(flag!=1){
				cout<<v[i]<<" ";
			}
			flag=0;
			
		}
		cout<<endl;
	}
	return 0;
}