#include<stdio.h>
int main()
{
    int n, a, num = 0;
    scanf("%d",&n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a);
            num += a;
        }
        printf("%d",num);
    return 0;
}