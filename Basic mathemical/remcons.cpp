#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

	int count=0;
	string s;
	getline(cin,s);
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			count=1;
			cout<<s[i];
		}
		else if((int)s[i]==32)
		{
			cout<<" ";
		}
	}
	if(count!=1)
	{
		cout<<"No Vowel";
	}
	cout<<endl;
}
}