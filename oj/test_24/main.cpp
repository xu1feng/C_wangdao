#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//整型指针
    int TableLen;//存储动态数组里边元素的个数
} SSTable;

//用于申请空间，初始化TableLen
void ST_Init(SSTable &ST, int len) {
    ST.TableLen = len;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);
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
    ElemType A[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    //内存copy接口，当你copy整型数组，或者浮点型时，要用memcpy，不能用strcpy
    memcpy(ST.elem, A, sizeof(A));//这是为了降低调试难度，每次数组数据固定而设计的
    BubbleSort(ST.elem, 10);
    ST_print(ST);
    memcpy(ST.elem, A, sizeof(A));//这是为了降低调试难度，每次数组数据固定而设计的
    QuickSort(ST.elem, 0, 9);
    ST_print(ST);
    memcpy(ST.elem, A, sizeof(A));//这是为了降低调试难度，每次数组数据固定而设计的
    InsertSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
