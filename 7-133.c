#include <stdio.h>
int an(int n)
{
    int an = 6;
    if(n == 1){
        an = 6;
    }
    else{
        for(int i =2; i<=n; i++){
            an = an*10+6;
        }
    }
    return an;
}

int main()
{
    int n, sn = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        sn += an(i);
    }
    printf("%d",sn);
    return 0;
}