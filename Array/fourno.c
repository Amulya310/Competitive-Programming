#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,x,j,k,l,c=0;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    scanf("%d",&x);
	    for(i=0;i<n-3;i++)
	    {
	        for(j=i+1;j<n-2;j++)
	        {
	            for(k=j+1;k<n-1;k++)
	            {
	                for(l=k+1;l<n;l++)
	                {
	                    if((a[i]+a[j]+a[k]+a[l])==x)
	                    {
	                        c=1;
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    if(c==1)
	    printf("1\n");
	    else
	    printf("0\n");
	}
	return 0;
}