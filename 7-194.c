#include<stdio.h>
int main(){
    int a, y, m;
    scanf("%d",&a);
    y = a/100;
    m = a%100;
    if(y < 22){
        y = 2000+y;
    }if(y >= 22 && y< 100){
        y = 1900+y;
    }
    printf("%02d-%02d",y,m);
    return 0;
}