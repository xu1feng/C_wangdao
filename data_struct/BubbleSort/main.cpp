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

//优先去写内存循环，再写外层循环
void BubbleSort(ElemType A[], int n) {
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {//控制的是有序数的数目
        flag = false;//元素是否发生交换的标志
        for (j = n - 1; j > i; j--) {//内层比较交换
            if (A[j - 1] > A[j]) {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        }
        if (!flag)//如果一趟比较以后没有发生任何交换，说明有序，提前结束排序
            return;
    }
}


int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
//    ElemType A[10] = {64,94,95,79,69,84,18,22,12,78};
//内存copy接口，当你copy整型数组，或者浮点型时，要用memcpy，不能用strcpy
//    memcpy(ST.elem,A,sizeof (A));//这是为了降低调试难度，每次数组数据固定而设计的
    BubbleSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
