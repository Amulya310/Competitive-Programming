#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int x,int y,int c,int d)
{
    int m;
    //int k=0;
    //k =(-1 & 7);
    //printf("%d",k);
    m = x ^ ((x ^ y) & -(x < y));
    int n;
    n = c ^ ((c ^d) & - (c < d));
    int o;
    o = m ^ ((m ^ n) & -(m < n));
    return o;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
