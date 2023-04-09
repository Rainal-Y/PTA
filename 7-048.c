#include<stdio.h>
double fact(int n)
{
    double ret = 1;
    for(int i = 1; i <= n; i++){
        ret *= i;
    }
    return ret;
}
int main()
{
    int m, n;
    double result;
    scanf("%d %d", &m, &n);
    result = fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f", result);
    return 0;
}