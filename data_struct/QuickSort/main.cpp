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

//快排的核心函数
//挖坑法
int Partition(ElemType *A, int low, int high) {
    ElemType pivot = A[low];//用最左边的值作为分割值，并存储下来
    while (low < high) {
        while (low < high && A[high] >= pivot)//从后往前遍历，找到一个比分割值小的
            high--;
        A[low] = A[high];//把比分割值小的元素放到A[low]
        while (low < high && A[low] <= pivot)//从前往后遍历，找到一个比分割值大的
            low++;
        A[high] = A[low];//把比分割值大的元素放到A[high]
    }
    A[low] = pivot;//把分割值放到中间的位置，左边的元素比它小，右边的元素比它大
    return low;
}

void QuickSort(ElemType *A, int low, int high) {
    if (low < high) {
        int pivotpos = Partition(A, low, high);//pivot用来存分割的位置
        QuickSort(A, low, pivotpos - 1);//前一半继续递归排序号
        QuickSort(A, pivotpos + 1, high);//后一半也递归排序好
    }
}

int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
    QuickSort(ST.elem, 0, 9);
    ST_print(ST);
    return 0;
}
