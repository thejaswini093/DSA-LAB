#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    if(a==b) return a;
    else if (a>b) return GCD(a-b,b);
    return GCD (b,a);
}
int main()
{
    int a,b;
    printf("read the values for a and b: \n");
    scanf("%d%d",&a,&b);
    printf("GCD OF %d and %d is %d",a,b,GCD(a,b));
    return 0;
}
