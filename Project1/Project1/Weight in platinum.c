#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    float weight; /*你的体重*/
    float value; /*相等重量的白金价值*/
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    scanf("%f", &weight);/*获取用户的输入*/
    value = 1700.0 * weight * 14.5833;/*假设铂金的价格是$1700, 14.5833用于把英镑常衡盎司转换为金衡盎司*/
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum price drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}