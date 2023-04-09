#include<stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d", &a);
    if(a <= 1600){
        b = 0;
    }if(a <= 2500 && a > 1600){
        b = (a-1600) * 0.05; 
    }if(a <= 3500 && a > 2500){
        b = (a-1600) * 0.10; 
    }if(a <= 4500 && a > 3500){
        b = (a-1600) * 0.15; 
    }if(a >  4500){
        b = (a-1600) * 0.20; 
    }
    printf("%.2f", b);
    return 0;
}