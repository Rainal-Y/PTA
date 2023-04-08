#include<stdio.h>
int main()
{
    int hh, mm, ss, n;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    scanf("%d",&n);
    ss = ss+n;
    mm += ss/60;
    hh += mm/60;
    printf("%d:%d:%d", hh%24, mm%60, ss%60);
    return 0;
}