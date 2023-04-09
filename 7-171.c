#include<stdio.h>
#include<math.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    if(n >= 100 && n <= 999){
        a = pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3);
        if(a == n){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    else{
        printf("Invalid Value.");
    }
    return 0;
}