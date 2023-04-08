#include<stdio.h>
int main()
{
    int x, y, z, max;
    scanf("%d %d %d", &x, &y, &z);
    if(x < y){
        max = x;
        x = y;
        y = max;
    }


    printf("%d->%d->%d",x,y,z);    
    return 0;
}