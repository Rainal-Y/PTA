#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i <= n/3+1; i++){
        for(int j = 0; j <= n/2+1; j++){
            for(int k = 0; k <= 2*n; k++){
                if((i * 3 + j * 2 + k / 2 == n) && (i + j + k == n) && (k%2 == 0)){
                    printf("men = %d, women = %d, child = %d\n", i, j, k);
                    count ++;
                }
            }
        }
    }
    if(count == 0){
        printf("None");
    }
    return 0;
}