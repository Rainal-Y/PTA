#include<stdio.h>
int IsPrime(int s)
{
    double count = 0, ret = s;
    for(int i = s-1; i > 1; i--){
        if(s%i == 0){
            count++;
        }
    }
    if(count == 0 && s != 1){
        ret = s;
    }
    else{
        ret = 0;
    }
    return ret;
}
int main()
{
    int m, n, sum = 0, count = 0;
    scanf("%d %d", &m, &n);
    for(m; m <= n; m++){
        sum += IsPrime(m);
        if(IsPrime(m) != 0){
            count++;
        }
    }
    printf("%d %d", count, sum);    
    return 0;
}