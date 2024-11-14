#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//float calculate_internet_fee(int t) {
//    float x;
//    if (t < 10) {
//        x = 1.5 * t;
//    }
//    else if (t >= 10 && t < 50) {
//        x = 15 + (t - 10) * 1.2;
//    }
//    else {
//        x = 15 + 40 * 1.2 + (t - 50) * 0.8;
//    }
//    if (x > 120) return 120;
//    return x;
//}
//
//int main() {
//    int t;
//    printf("请输入上网时间(小时)：");
//    scanf("%d", &t);
//    printf("上网费用为：%.2f元\n", calculate_internet_fee(t));
//    return 0;
//}

//int main() {
//    int num;
//    printf("请输入一个三位整数：");
//    scanf("%d", &num);
//    int a = num / 100;
//    int b = (num % 100) / 10;
//    int c = num % 10;
//    if (a > b) {
//        if (b > c) {
//            printf("%d%d%d\n", c, b, a);
//        }
//        else {
//            if (a > c) {
//                printf("%d%d%d\n", b, c, a);
//            }
//            else {
//                printf("%d%d%d\n", b, a, c);
//            }
//        }
//    }
//    else {
//        if (a > c) {
//            printf("%d%d%d\n", c, a, b);
//        }
//        else {
//            if (b > c) {
//                printf("%d%d%d\n", a, c, b);
//            }
//            else {
//                printf("%d%d%d\n", a, b, c);
//            }
//        }
//    }
//    return 0;
//}

//int main() {
//    int num;
//    printf("请输入一个不多于5位的正整数：");
//    scanf("%d", &num);
//    // ① 求出它有几位数
//    int count = 0;
//    int temp = num;
//    while (temp > 0) {
//        temp /= 10;
//        count++;
//    }
//    printf("位数：%d\n", count);
//    // ② 分别打印出每一位数字
//    temp = num;
//    int digits[5];
//    int i = 0;
//    while (temp > 0) {
//        digits[i] = temp % 10;
//        temp /= 10;
//        i++;
//    }
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d ", digits[j]);
//    }
//    printf("\n");
//    // ③ 按逆序打印出各位数字
//    for (int j = 0; j < i; j++) {
//        printf("%d ", digits[j]);
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
//int calculate(char* expression) {
//    int a, b;
//    char op;
//    sscanf(expression, "%d%c%d", &a, &op, &b);
//    switch (op) {
//    case '+':
//        return a + b;
//    case '-':
//        return a - b;
//    case '*':
//        return a * b;
//    case '/':
//        return a / b;
//    default:
//        return 0;
//    }
//}
//
//int main() {
//    char expression[100];
//    printf("请输入一个四则运算表达式(例如：20+32)：");
//    scanf("%s", expression);
//    int result = calculate(expression);
//    printf("%s=%d\n", expression, result);
//    return 0;
//}
