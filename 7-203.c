#include<stdio.h>
int main()
{
    int a, b, n, j = 1;
    scanf("%d %d",&a, &b);
    n = a+b;
    for(int i = 1; i<=n; i++){
        j *= i;
    }
    printf("%d",j);
    return 0;
}