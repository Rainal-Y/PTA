#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x <= 100 && x >= 0){   
        if(x >= 90){
            printf("gong xi ni kao le %d fen!\n", x);
        }else{
            printf("kao le %d fen bie xie qi!\n", x);
        }
    }
    return 0;
}