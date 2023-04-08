#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("1");
    }else{
        for(int i = 1; i <= n; i++){
            printf("%d ",i);
        }
        for(int j = n-1; j>= 1; j--){
            if(j > 1){
                printf("%d ",j);
            }else{
            printf("%d",j);
            }
        }
    }
    return 0;
}