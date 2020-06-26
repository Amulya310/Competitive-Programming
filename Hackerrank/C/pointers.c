#include <stdio.h>

void update(int *a,int *b) {
    int temp;
    temp = *a + *b;
    //printf("%d",temp);
    *b = *b>*a ?*b-*a:*a-*b;
    
    *a = temp;
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", *pa, *pb);

    return 0;
}
