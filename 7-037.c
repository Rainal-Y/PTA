#include<stdio.h>
int main()
{
    int n, count = 0, b[100];
    scanf("%d",&n);
    if(n == 0){
        printf("0 ");
    }else{
        while(n != 0){
            count++;
            b[count] = n%10;
            n /= 10;
        }
        for(int i = count; i > 0; i--){
        printf("%d ",b[i]);
        }
    }
    return 0;
}