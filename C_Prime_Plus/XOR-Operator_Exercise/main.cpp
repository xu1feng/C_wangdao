#include <stdio.h>

//异或实战，在一堆数中寻找出现1次的数，其他数出现两次
int main() {
    int i;
    int a[5] = {8, 5, 3, 5, 8};
    int result = 0;
    for (i = 0; i < 5; i++) {
        result ^= a[i];//异或满足交换律
    }
    printf("result = %d", result);
    return 0;
}
