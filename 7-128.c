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
    int m, count = 0;
    scanf("%d", &m);
    m += 1;
    do{
        if(IsPrime(m) != 0){
            printf("%d\n", IsPrime(m));
            count++;
        }
        if(IsPrime(m) == 0){
            m++;
        }
    }while(count < 1);
    return 0;
}