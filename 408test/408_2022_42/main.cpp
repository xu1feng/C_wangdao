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
        ST.elem[i] = rand();
    }
}

void ST_print(SSTable ST) {
    for (int i = 0; i < 10; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

void swap(ElemType &a, ElemType &b) {
    ElemType temp = a;
    a = b;
    b = temp;
}

//把某个子树调整为大根堆
void AdjustDown(ElemType *A, int k, int len) {
    int dad = k;//父亲的下标
    int son = 2 * dad + 1;//左孩子的下标
    while (son < len) {
        if (son + 1 < len && A[son] < A[son + 1])//如果左孩子小于右孩子
        {
            son++;//拿右孩子和父亲比
        }
        if (A[son] > A[dad]) { //如果孩子大于父亲
            swap(A[son], A[dad]);//交换
            dad = son;//son重新作为dad去判断下面的子树是否符合大根堆
            son = 2 * dad + 1;
        } else {
            break;
        }
    }
}

void HeapSort(ElemType *A, int len) {
    int i;
    //就是把堆调整为大根堆
    for (i = len / 2; i >= 0; i--) {
        AdjustDown(A, i, len);
    }
    //比较剩余的A[10]到A[99999]元素，小于堆顶，就放入A[0]，继续调整10个元素为大根堆
    for (i = 10; i < 100000; i++) {
        if (A[i] < A[0]) {
            A[0] = A[i];
            AdjustDown(A, 0, 9);//继续调整为大根堆
        }
    }
}

int main() {
    SSTable ST;
    ST_Init(ST, 100000);
    HeapSort(ST.elem, 9);
    ST_print(ST);
    return 0;
}
