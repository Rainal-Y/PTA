#include<stdio.h>
int main()
{
    int a, num = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        num += a%10;
        a /= 10;
    }
    printf("%d", num);
    return 0;
}