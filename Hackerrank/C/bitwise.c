#include <stdio.h>  
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,and,andmax=0,or,ormax=0,xor,xormax=0;
  for(i=2;i<=n;i++)
  {
      for(j=1;j<i;j++)
      {
        and = i & j;
        if(and >= andmax && and < k)
        {
            andmax= and;
        }
        or = i | j;
        if(or >= ormax && or < k)
        {
            ormax= or;
        }
        xor = i ^ j;
        if(xor >= xormax && xor < k)
        {
            xormax= xor;
        }
      }
  }
  printf("%d\n%d\n%d\n",andmax,ormax,xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
