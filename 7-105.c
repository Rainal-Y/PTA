#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int i=1;;i++){
        if(x == 250){
            printf("%d", i);
            break;
        }
        scanf("%d", &x);
    }
    return 0;
}