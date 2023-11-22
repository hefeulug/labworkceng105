#include <stdio.h>

int main()
{
    int x, y, sum;
    sum=0;
    printf("Input an integers with 3 digits");
    scanf("%d", &x);
    y=x%10;
    sum=sum+y;
    x=x-y;
    y=x%100;
    sum=sum+(y/10);
    x=x-(y);
    y=x/100;
    sum=sum+y;
    printf("%d", sum);
    return 0;
}