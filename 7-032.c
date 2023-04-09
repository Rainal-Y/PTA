#include<stdio.h>
int main()
{
    int n;
    double j = 0, k;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        k = i;
        if(i%2 != 0){
            j += k/(2*k-1);
        }else{
            j -= k/(2*k-1);
        }
        
    }
    printf("%.3f",j);
    return 0;
}