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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
        
        sort(a,a+n);
        int flag=0,flag2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                cout<<i<<" ";
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==x)
            {
                cout<<i;
                flag2=0;
                break;
            }
            else
            {
                flag2=1;
            }
        }
        if(flag==1 && flag2==1)
        {
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}