#include<stdio.h>
int main()
{
    double kw, cost;
    scanf("%lf",&kw);
    if(kw < 0){
        printf("Invalid Value!\n");
    }
    if(kw <= 50 && kw >= 0){
        cost = 0.53*kw;
        printf("cost = %.2f",cost);
    }
    if(kw > 50){
        cost = 0.58*kw-50*0.05;
        printf("cost = %.2f",cost);
    }
    return 0;
}