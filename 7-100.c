#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d",&a);
    b = a/100;
    c = a/10%10;
    d = a%10;
    if(d!=0)
    printf("%d%d%d",d,c,b);
    else if(d == 0&&c == 0)
    printf("%d",b);
    else if(d==0&&c!=0)
    printf("%d%d",c,b);
    return 0;
}