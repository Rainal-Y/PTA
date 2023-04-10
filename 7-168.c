#include<stdio.h>
int main()
{
    int n, x[10], y[10], z[10];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }
    for(int j = 0; j < n; j++){
        if(x[j]*x[j]+y[j]*y[j]+z[j]*z[j] == 3*x[j]*y[j]*z[j]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}