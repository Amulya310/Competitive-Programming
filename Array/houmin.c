
#include <stdio.h>
#include <stdlib.h>
int min(int x, int y) { return (x < y)? x: y; }

int calcAngle(double h, double m)
{
	if (h == 12) h = 0;
	if (m == 60) m = 0;

	int hour_angle = 0.5 * (h*60 + m);
	int minute_angle = 6*m;

	int angle = abs(hour_angle - minute_angle);

	angle = min(360-angle, angle);

	return angle;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double h,m;
		scanf("%lf %lf",&h,&m);
		printf("%d\n",calcAngle(h,m));
	}
	return 0;
}
