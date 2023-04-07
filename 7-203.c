#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, n;
    double j;
    scanf("%d %d",&a, &b);
    n = a+b;
    j = fact(n);
    printf("%f",j);
    return 0;
}