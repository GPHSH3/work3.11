#include <stdio.h>
int main()
{
    double a;//a表示水分子数
    double b;//b表示水夸脱数
    printf("输入水的夸脱数:");
    scanf("%lf",&b);
    a=b*950/3.0e-23;
    printf("对应的水分子数:%f",a);
    return 0;
}