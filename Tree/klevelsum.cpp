#include<bits/stdc++.h>
using namespace std;

int main()
 {
     int t;
     cin>>t;
     while(t--){
         int k;
         cin>>k;
         string s;
         cin>>s;
         int c=0,sum=0;
         for(int i=0;i<s.length();i++){
             if(s[i]=='(')
             c++;
             else if(s[i]==')')
             c--;
             else if(c==k+1){
                 int x=0;
                 while(s[i]>='0'&&s[i]<='9'){
                    x=x*10+(s[i]-48);
                    i++;
                 }
                 sum+=x;
                 i--;
             }
         }
         cout<<sum<<'\n';
     }
    return 0;
}