#include <stdio.h>
	int main() {
	int t,i;
	int n;
	int a[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		    scanf("%d",&a[i]);
		}
		for( i=n-1;i>=0;i--)
		{
		    printf("%d ",a[i]);
		}
		printf("\n");
	}
		
		return 0;
}