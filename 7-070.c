#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, s;
    double area, perimeter;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a){
        perimeter = a+b+c;
        s = perimeter/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area = %.2f; perimeter = %.2f",area,perimeter);
    }
    else{
        printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}