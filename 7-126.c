#include<stdio.h>
int main()
{
    int h1, m1, h2, m2;
    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
    printf("%d %d\n", (h2-h1-1+(m2+60-m1)/60), (m2+60-m1)%60);
    return 0;
}