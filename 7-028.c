#include<stdio.h>
int main(){
    int n, count = 0, b[10], num = 0;
    scanf("%d",&n);
    while (n != 0)
    {
        b[count] = n%10;
        count++;
        n /= 10;
    }
    for(int i = 0; i < count; i++){
        num += b[i];
    }
    printf("%d %d",count,num);
    return 0;
}