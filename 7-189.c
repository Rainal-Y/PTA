#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    e = abs(c-a)+abs(d-b);
    printf("%d",e);
}