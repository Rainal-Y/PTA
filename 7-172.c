#include<stdio.h>
int main()
{
    int n,j = 1;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        j *= i;
    }
    printf("%d",j);
    return 0;
}