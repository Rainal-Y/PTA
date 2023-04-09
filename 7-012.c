#include<stdio.h>
int main()
{
    int yyyy, mm, dd;
    scanf("%02d-%02d-%04d", &mm, &dd, &yyyy);
    printf("%04d-%02d-%02d", yyyy, mm, dd);
    return 0;
}