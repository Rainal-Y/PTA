#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
        for(int i = 1; i <= n; i++){
            for(int s = 1; s <= 39-i; s++){
                printf(" ");
            }            
            for(int j = 1; j <= i; j++){
                printf("%d",j);
            }
            for(int k = i-1; k >= 1; k--){
                printf("%d",k);
            }
            printf("\n");    
        }    
    return 0;
}