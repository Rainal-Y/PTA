#include<stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if(x != 10){
        printf("f(%.1f) = %.1f", x, x);
    }else{
        printf("f(%.1f) = %.1f", x, 1.0/x);
    }
    return 0;
}