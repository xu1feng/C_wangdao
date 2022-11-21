#include <stdio.h>

//自增和自减运算符
int main() {
    int i = -1, j;
    j = i++ > -1;//后++等价于j=i>-1;i=i+1;
    printf("i = %d,j = %d\n", i, j);
    j = ++i > -1;//前++等价于i=i+1;j=i>-1;
    printf("i = %d,j = %d\n", i, j);
    int a[3] = {3, 7, 9};
    int *p;
    p = a;
    j = *p++;//先把*p的值赋给j，然后对p加1，p加1加的是基类型的大小，等价于j=*p;p++;
    printf("a[0] = %d,j = %d,*p = %d\n", a[0], j, *p);
    j = p[0]++;//p现在指向7的位置，先把p[0]赋给j，然后对p[0]加1，等价于j=p[0];p[0]++;
    printf("a[0] = %d,j = %d,*p = %d\n", a[0], j, *p);
    return 0;
}
