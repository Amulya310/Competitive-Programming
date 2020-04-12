#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    string s,r;
    cin>>n>>s;
    //cout<<r;
    for(int i=0;i<s.size();i++)
    {
    	cout<<r<<endl;
        if(r.size()>0 && r[r.size()-1]==s[i]){
        	//cout<<" "<<r.end()<<endl;
            r.erase(r.end()-1,r.end());
        }
        else
            r.push_back(s[i]);
    }
    cout<<r.size()<<endl<<r;
}