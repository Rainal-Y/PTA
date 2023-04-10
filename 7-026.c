#include<stdio.h>
int main()
{
    int m, n, max, min;
    scanf("%d %d", &m, &n);
    for(int i = 1; i <= m && i <= n; i++){
        if(m%i ==0 && n%i == 0){
            max = i;
        }
    }
    min = m/max*n;
    printf("%d %d\n", max, min);
    return 0;
}