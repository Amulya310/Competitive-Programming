#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        //printf("%d",sum);
        int tsum;
        tsum=(n*(n+1))/2;
        //printf("%d",tsum);
        printf("%d\n",(tsum-sum));
    }
    return 0;
}