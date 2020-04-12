#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        int temp[d];
        int a[n+d];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
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
