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
        int a[1005],b[1005]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
            //cout<<b[a[i]];
        }
        for(int i=0;i<1000;i++)
        {
            if(b[i]%2!=0)
            {
                cout<<i;
            }
        }
        
    }

}