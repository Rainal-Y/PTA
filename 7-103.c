#include<stdio.h>
int main()
{
    int a, b;
    double s;
    scanf("%d %d", &a, &b);
    if(b > 0){
        printf("%d/%d=%.2f", a, b, 1.0*a/b);
    }if(b == 0){
        printf("%d/%d=Error", a, b);
    }if(b < 0){
        printf("%d/(%d)=%.2f", a, b, 1.0*a/b);
    }
    return 0;
}