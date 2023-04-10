#include<stdio.h>
int main()
{
    int a, b;
    double y;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c == 'm'){
        y = 0.95;
    }if(c == 'e'){
        y = 0.97;
    }if(b == 90){
        y = y*a*6.95;
    }if(b == 93){
        y = y*a*7.44;
    }if(b == 97){
        y = y*a*7.93;
    }
    printf("%.2f\n", y);
    return 0;
}