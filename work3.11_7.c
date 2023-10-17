#include<stdio.h>
int main()
{
    double hight1;
    double hight2;
    printf("请输入你的身高(英寸):");
    scanf("%lf",&hight1);
    hight2=hight1*2.54;
    printf("你的身高是:%fcm",hight2);
    return 0;

}