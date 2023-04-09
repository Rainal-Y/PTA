#include<stdio.h>
int main()
{
    double n, a = 2, b = 1, c, sum = 0;
    scanf("%lf", &n);
    for(int i = 0; i < n; i++){
        sum += a/b;
        c = a;
        a = a+b;
        b = c;
    }
    printf("%.2f",sum);
    return 0;
}