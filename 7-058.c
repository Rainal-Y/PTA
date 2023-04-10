#include<stdio.h>
#include<math.h>
double fact(int n)
{
    double sum = 1;
    for(int i = 1; i <= n; i++){
        sum *= i;
    }
    return sum;
}
int main()
{
    double x, num, sum = 0.0, k = 1;
    scanf("%lf", &x);
    do{
        num = pow(x,k)*1.0/fact(k);
        k++;
        sum += num;
    }while(fabs(num) > 0.00001);
    printf("%.4f", sum+1);
    return 0;
}