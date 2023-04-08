#include<stdio.h>
int main()
{
    int n, num, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        num = 1;
        for(int j = 1; j <= i; j++){
            num *= j;
        }
        sum += num;
    }
    printf("%d\n",sum);   
    return 0;
}