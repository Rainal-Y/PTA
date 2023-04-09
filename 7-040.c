#include<stdio.h>
#include<math.h>
int main()
{
    int n, h[20], w[20], b;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d",&h[i],&w[i]);
    }   
    for(int j = 1; j <= n; j++){
        b = (h[j]-100)*1.8;
        if(abs(w[j]-b) < b * 0.1){
            printf("You are wan mei!\n");
        }if(w[j]-b >= b * 0.1){
            printf("You are tai pang le!\n");
        }if(b-w[j] >= b * 0.1){
            printf("You are tai shou le!\n");
        }
    }
    return 0;
}