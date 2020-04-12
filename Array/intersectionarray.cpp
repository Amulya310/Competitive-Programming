#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,m;
    int A[1001],B[1001];
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        int hash[1002]={0};
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            hash[A[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            cin>>B[j];
            if(hash[B[j]]>=1)
            {
                v1.push_back(B[j]);
            }
        }
        sort(v1.begin(),v1.end());
        if(v1.size()==0)
        {
            cout<<"Zero\n";
            continue;
        }
        for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
        cout<<endl;
    }
    return 0;
}