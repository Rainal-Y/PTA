#include<stdio.h>
int main()
{
    int n;
    double fm = 1.0, sum = 0, sign =1.0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += sign*(1/fm);
        sign = -sign;
        fm +=3;
    }
    printf("sum = %.3f\n",sum);
    return 0;
}