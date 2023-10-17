#include<stdio.h>
int main()
{
    int age;
    printf("请输入你的年龄:");
    scanf("%d",&age);
    printf("\n该年龄对应的秒数:%f",age*3.156e7);
    return 0;
}