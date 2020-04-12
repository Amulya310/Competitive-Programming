#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;cin>>t;
     while(t--){
         int n;cin>>n;
         string s;
         cin>>s;
         char  ch;
         int f=0;
         int a[26]={0};
      //   sort(s.begin(),s.end());
         for(int i=0;i<s.length();i++)
            a[s[i]-'a']++;
            for(int i=0;i<s.length();i++)
              {
             if(a[s[i]-'a']==1)
             {
                 f=1;
                 ch=s[i];
                 break;
             }
             else
             f=0;
         }
         if(f==1)
         cout<<ch<<endl;
         else
         cout<<-1<<endl;
     }
	//code
	return 0;
}