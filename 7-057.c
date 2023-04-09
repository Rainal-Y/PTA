#include<stdio.h>
int main()
{
    int n;
    double a = 1.0, sum = 0.0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        a *= i;
        sum += 1/a;
    }
    printf("%.8lf",sum+1);
    return 0;
}