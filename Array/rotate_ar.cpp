#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&d);
        int temp[d];
        for(int i=0;i<d;i++)
        {
            temp[i]=a[i];
        }
        for(int j=d;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        for(int i=0;i<d;i++)
        {
            printf("%d ",temp[i]);
        }
        
        
        printf("\n");
        
    }
    return 0;
}
