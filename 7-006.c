#include<stdio.h>
int main()
{
    int cm, f,i ;
    scanf("%d", &cm);
    f = cm/30.48;
    i = ((cm/30.48)-f)*12;
    printf("%d %d", f, i);
    return 0;
}