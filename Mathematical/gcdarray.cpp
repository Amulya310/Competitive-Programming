#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         int min=0;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             if(min>a[i])
             {
                 min=a[i];
             }
         }
         int hcf;
         for(int i=0;i<n;i++)
         {
             if(a[i]!=min)
             {
                 hcf=gcd(a[i],min);
             }
             min=hcf;
         }
         cout<<hcf<<endl;
         
     }
	//code
	return 0;
}