#include<stdio.h>
int main()
{
    int n;
    double h;
    char c;
    scanf("%d", &n);
    for(int i = 1; i <= 2*n; i++){
        scanf("%c %lf", &c, &h);
        if(c == 'M'){
            printf("%.2f\n", h/1.09);
        }if(c == 'F'){
            printf("%.2f\n", h*1.09);
        }
    }
    return 0;
}