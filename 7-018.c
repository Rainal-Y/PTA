#include<stdio.h>
#include<math.h>
int main()
{
    int time, y;
    double x;
    scanf("%lf %d", &x, &time);
    if(x <= 3){
        y = 10;
    }if(x <= 10 && x > 3){
        y = round(10 + (x-3)*2);
    }if(x > 10){
        y = round(10 + (x-3)*2 + (x-10));
    }
    if(time >= 5){
        y += (time/5)*2;
    }
    printf("%d", y);
    return 0;
}