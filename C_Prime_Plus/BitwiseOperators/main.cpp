#include <stdio.h>

//位运算符
int main() {
    short i = 5;
    short j;
    j = i << 1;//一个变量移动以后自身不会变化
    printf("j=%d\n", j);//左移是乘2
    j = i >> 1;
    printf("j=%d\n", j);//右移是除2
    i = 0x8011;
    unsigned short s = 0x8011;
    unsigned short r = 0;
    j = i >> 1;
    r = s >> 1;
    printf("j=%d i=%d\n", j, i);
    i = 5, j = 7;
    printf("i&j=%d\n", i & j);
    printf("i|j=%d\n", i | j);
    printf("i^j=%d\n", i ^ j);
    printf("~i=%d\n", ~i);

    return 0;
}
