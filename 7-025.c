#include<stdio.h>
int main()
{
    int x, sum = 0;
    scanf("%d ", &x);
    while(x > 0){   
        if(x%2 != 0){
            sum += x;
        }
        scanf("%d ", &x);
    }
    printf("%d\n", sum);
    return 0;
}