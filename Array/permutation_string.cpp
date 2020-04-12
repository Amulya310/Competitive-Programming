#include <bits/stdc++.h>
using namespace std;
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permutation(string s,int l,int r,vector <string> &v)
{
    if(l==r)
    {
        v.push_back(s);
    }
    else{
        for(int i=l;i<=r;i++)
        {	
        	swap((s[l]),(s[i]));
        	permutation(s,l+1,r,v);
        	swap((s[l]),(s[i]));
            
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int l=s.length();
	    vector<string>v;
	    vector<string>::iterator it;
	    
	    permutation(s,0,l-1,v);
	    sort(v.begin(),v.end());
	    for(it=v.begin();it!=v.end();it++)
	    {
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}