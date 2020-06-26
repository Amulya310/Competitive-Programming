#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    scanf("%c",&c);
    printf("%c\n",c);
    char s[20];
    scanf("%s",&s);
    printf("%s\n",s);
    char str[20];
    scanf("\n");
    scanf("%[^\n]%*c",str);
    printf("%s",str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
