#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//整型指针
    int TableLen;//存储动态数组里边元素的个数
} SSTable;


//init进行了随机数生成，折半查找我们没有使用哨兵
void ST_Init(SSTable &ST, int len) {
    ST.TableLen = len;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);
    int i;
    srand(time(NULL));//随机数生成
    for (i = 0; i < ST.TableLen; i++) {
        ST.elem[i] = rand() % 100;
    }
}

void ST_print(SSTable ST) {
    for (int i = 0; i < ST.TableLen; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

void swap(ElemType &a, ElemType &b) {
    ElemType temp = a;
    a = b;
    b = temp;
}

void InsertSort(ElemType *A, int n) {
    int i, j, insertVal;
    for (i = 1; i < n; i++)//外层控制要插入的数
    {
        insertVal = A[i];//保存要插入的数
        //内层控制比较，j要大于等于0，同时A[j]大于insertVal时，A[j]位置元素往后覆盖
        for (j = i - 1; j >= 0 && A[j] > insertVal; j--) {
            A[j + 1] = A[j];
        }
        A[j + 1] = insertVal;
    }

}

int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
    InsertSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
