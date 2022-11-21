#include <stdio.h>

//条件运算符和逗号运算符
int main() {
    int a, b, max;
    while (scanf("%d %d", &a, &b)) {
        max = a > b ? a : b;//条件运算符的优先级高于赋值运算符
        printf("max = %d\n", max);
    }
    int i, j;
    i = 10;
    j = 1;
    if (i, j - 1)//并不会进入if，逗号表达式整体的值是最后一个表达式的值
    {
        printf("if execute");
    }
    //逗号表达式的常见场景，for的表达式1初始化多个变量用的较多
    for (i = 0, j = 1; i < 10; i++) {

    }
    return 0;
}
