#include<stdio.h>
int main()
{
    int n;
    double fm = 1.0, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += 1/fm;
        fm += 2;
    }
    printf("sum = %.6f\n",sum);
    return 0;
}