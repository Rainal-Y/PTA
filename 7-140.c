#include<stdio.h>
int main()
{
    int n, a[1000];
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    scanf("%d", &n);
    for(int i = 3; i <= n; i++){
    a[i] = a[i-1] + a[i-2];
    }   
    printf("%d", a[n]);  
    return 0;
}