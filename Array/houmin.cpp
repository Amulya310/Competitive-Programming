#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate_angle(float h,float m)
{
    if(h>12||m>60||h<=0||m<0)
    {cout<<"wrong input"<<endl;
    return -1;
    }
    if(h==12)h=0;
    if(m==60)m=0;
    float hour_angle=0.5*(h*60+m);
    float min_angle=6*m;
    float angle=abs(hour_angle-min_angle);
 angle=min(360-angle,angle);
    int res=floor(angle);
    return res;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    float h,m;
	    cin>>h>>m;
	    cout<<calculate_angle(h,m)<<endl;
	}
	return 0;
}