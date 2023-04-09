#include<stdio.h>
int main()
{
    double x, r;
    scanf("%lf",&x);
    if(x == 0){
        printf("f(0.0) = 0.0\n");
    }
    else{
        r = 1/x;
        printf("f(%.1f) = %0.1f\n",x,r);
    }
    return 0;
}