#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2 != 0){
        for(int i = 1; i <= n-1; i += 2){
            printf("%d ", i);
        }
        printf("%d", n);
    }else{
        for(int i = 1; i <= n-2; i += 2){
            printf("%d ", i);
        }
        printf("%d", n-1);
    }
    return 0;
}