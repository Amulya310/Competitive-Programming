#include<bits/stdc++.h>
using namespace std;
void firstnonrepeating(char str[],int n)
{
    int count[26]={0};
	    queue<char>q;
	    for(int i=0;i<n;i++)
	    {
	        q.push(str[i]);
	        count[str[i]-'a']++;
	        while(!q.empty())
	        {
	            if(count[q.front()-'a'] > 1)
	               q.pop();
	           else
	             {
	                 cout<<q.front()<<" ";
	                 break;
	             }   
	        }
	        if(q.empty())
	           cout<<-1<<" ";
	    }
	     cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	for(int z=1;z<=t;z++)
	{
	    int n;
	    cin>>n;
	    char str[n];
	    for(int i=0;i<n;i++)
	      cin>>str[i];
	    firstnonrepeating(str,n);
	}
	return 0;
}