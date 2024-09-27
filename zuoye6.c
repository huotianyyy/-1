#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    double rate;
    double capital;
    double deposit;

    printf("Please enter rate, year, capital: ");
    scanf("%lf,%d,%lf", &rate, &n, &capital); // 读取利率、年份和本金

    // 计算本利之和
    deposit = capital * pow((1 + rate), n);

    printf("deposit = %.2f\n", deposit); // 输出结果，保留两位小数

    return 0;
}