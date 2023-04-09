#include<stdio.h>
int main()
{
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    int a, count = 0;
    while(count < 5)
    {
        scanf("%d", &a);
        count++;
        if(a == 0){
            break;
        }else{
            switch (a)
            {
            case 1:printf("price = 3.00\n");break;
            case 2:printf("price = 2.50\n");break;
            case 3:printf("price = 4.10\n");break;
            case 4:printf("price = 10.20\n");break;
            default:printf("price = 0.00\n");break;
            }
        }
    }
    return 0;
}