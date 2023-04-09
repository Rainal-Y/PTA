#include<stdio.h>
int main()
{
    int time, year;
    double money;
    scanf("%d %d",&year, &time);
    if(time > 40 && year >= 5){
        money = 50*40+(time-40)*50*1.5;
    }
    if(time > 40 && year < 5){
        money = 30*40+(time-40)*30*1.5;
    }
    if(time <= 40 && year >= 5){
        money = time*50;
    }
    if(time <= 40 && year < 5){
        money = time*30;
    }
    printf("%.2f",money);
    return 0;
}