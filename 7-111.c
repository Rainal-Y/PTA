#include<stdio.h>
int main()
{
    int x, y, n, a = 0;
    scanf("%d",&n);
    for(x = 1; x<=100; x++){
        for(y = 1; y<=100; y++){
            if((x*x+y*y == n)&&(x <= y)){
                printf("%d %d\n",x,y);
                a = 1;
            }
        }
    }
    if(a == 0){
        printf("No Solution");
    }
    return 0;
}