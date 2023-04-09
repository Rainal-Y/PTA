#include<stdio.h>
#include<math.h>
int main()
{
    double x, r;
    scanf("%lf",&x);
    if(x >= 0){
        r = pow(x,0.5);
        printf("f(%.2f) = %0.2f\n",x,r);
    }
    else{
        r = (x+1)*(x+1)+2*x+1/x;
        printf("f(%.2f) = %0.2f\n",x,r);
    }
    return 0;
}