#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l,r;
        cin>>l>>r;
        int ans=0,cur=0;
        stack<char> ss;
        for(int i=l;i<=r;i++)
        {
            if(ss.empty()&&s[i]==')')
            {
                //cur=0;
                continue;
            }
            if(s[i]=='(')
            {
                ss.push(s[i]);
                //cur++
            }
            if(!ss.empty()&&s[i]==')'&&ss.top()=='(')
            {
                cur+=2;
                ss.pop();
                ans=max(ans,cur);
            }
            
        }
        cout<<ans<<"\n";
    }
}