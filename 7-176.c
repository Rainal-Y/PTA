#include<stdio.h>
int main()
{
    int n, m;
    double p, a[100];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%lf",&p);
        a[i] = p;
    }
    for(int j = 0; j < n; j++){
        if(a[j] < m){
            printf("On Sale! %.1f\n",a[j]);
        }    
    }
    return 0;
} 