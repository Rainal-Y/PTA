#include<stdio.h>
#include<math.h>
int main()
{
    double eps, item = 0.0, fm = 1.0, sum = 0.0, sign = 1.0;
    scanf("%lf", &eps);
    do{
        item = sign*(1/fm);
        sign = -sign;
        fm += 3;
        sum += item;
    }while(fabs(item) > eps);
    printf("sum = %.6f\n",sum);
    return 0;
}