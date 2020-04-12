#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i=0;i<n;i++)
int main()
{
	ll v;
	int c,q;
	scanf("%d",&q);
	unordered_map<ll,int> F,N;
	loop(q)
	{
		scanf("%d%lld",&c,&v);

			if(c==1)
			{
				cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				F[N[v]]--;
				cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				N[v]++;
				cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				F[N[v]]++;
				cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
			}
			else if(c==2)
			{
				if(N[v]>0)
			    { 
			    	cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				   F[N[v]]--;
				   cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				   N[v]--;
				   cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				   F[N[v]]++;
				   cout<<"N"<<N[v]<<" "<<"F"<<F[N[v]]<<endl;
				 }
			}
			else 
			{
				cout<<"F[v]"<<F[v]<<endl;
				printf("%d\n",F[v]>0?1:0);
			}
	}
	return 0;
}