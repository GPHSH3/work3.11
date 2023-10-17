#include <stdio.h>

int main() {
    float cups;

    printf("请输入杯数：");
    scanf("%f", &cups);

    float pints = cups / 2;
    float ounces = cups * 8;
    float tablespoons = ounces * 2;
    float teaspoons = tablespoons * 3;

    printf("品脱：%f\n", pints);
    printf("盎司：%f\n", ounces);
    printf("汤勺：%f\n", tablespoons);
    printf("茶勺：%f\n", teaspoons);

    return 0;
}
