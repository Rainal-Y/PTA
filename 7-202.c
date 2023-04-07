#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    if(c >= a && d >= a){
        printf("%d-Y %d-Y\n",c,d);
        printf("huan ying ru guan\n");
    }if(c < a && d < a){
        printf("%d-N %d-N\n",c,d);
        printf("zhang da zai lai ba\n");
    }if(c >= b && d < a){
        printf("%d-Y %d-Y\n",c,d);
        printf("qing 1 zhao gu hao 2\n");
    }if(d >= b && c < a){
        printf("%d-Y %d-Y\n",c,d);
        printf("qing 2 zhao gu hao 1\n");
    }if(c >= a && c < b && d < a){
        printf("%d-Y %d-N\n",c,d);
        printf("1: huan ying ru guan\n");
    }if(d >= a && d < b && c < a){
        printf("%d-N %d-Y\n",c,d);
        printf("2: huan ying ru guan\n");
    }    
    return 0;
}