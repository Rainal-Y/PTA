#include<stdio.h>
int main()
{
    int year, count = 0;
    scanf("%d", &year);
    if(year > 2100 || year < 2001){
        printf("Invalid year!\n");
    }else{
        for(int i = 2001; i <= year; i++){
            if((i % 4 == 0 && i % 100 != 0) || i %400 == 0){
                printf("%d\n", i);
                count++;
        }
    }
        if(count == 0){
            printf("None\n");
        }
    }
    return 0;
}