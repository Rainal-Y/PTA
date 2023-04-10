#include<stdio.h>
int main()
{
    int n, a = 0;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        a += i;
        for(int j = a-i+1; j <= a; j++){
            printf("%4d", j);
        }
        printf("\n");
    }
    return 0;
}