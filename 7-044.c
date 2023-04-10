#include<stdio.h>
int max(int x)
{
    int a[3], temp, s;
    a[0] = x/100;
    a[1] = x/10%10;
    a[2] = x%10;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2-i; j++){
            if(a[j] >= a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    s = a[2]*100 + a[1]*10 + a[0];
    return s;
}
int min(int x)
{
    int a[3], temp, s;
    a[0] = x/100;
    a[1] = x/10%10;
    a[2] = x%10;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2-i; j++){
            if(a[j] <= a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    s = a[2]*100 + a[1]*10 + a[0];
    return s;
}
int main()
{
    int a, b, c, count = 1;
    scanf("%d", &a);
    do{
        b = max(a);
        c = min(a);
        a = b -c;
        printf("%d: %d - %d = %d\n", count, b, c, a);
        count++;
        if(b == c){
            break;
        }
    }while(a != 495);
    return 0;
}