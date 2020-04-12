#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		string s;
		cin>>s;
		int l=s.size();
		for(int i=0;i<l;i++)
		{
			if(s[i]=='s')
			{
				for(int j=i+1;j<l;j++)
				{

					if(s[j]=='m')
					{

						for(int k=j+1;k<l;k++)
						{

							if(s[k]=='s')
							{
								count++;
							}
						}
					}
				}
			}
		}
		cout<<count<<endl;

	}
}