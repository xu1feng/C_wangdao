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
    for (i = len / 2 - 1; i >= 0; i--) {
        AdjustDown(A, i, len);
    }
    swap(A[0], A[len - 1]);//交换根部元素和最后一个元素
    for (i = len - 1; i > 1; i--)//i代表的是剩余的无序数的数组的长度
    {
        AdjustDown(A, 0, i);//调整剩余元素变为大根堆
        swap(A[0], A[i - 1]);//交换根部元素和无序数的数组的最后一个元素
    }
}

int main() {
    SSTable ST;
    ST_Init(ST, 10);
//    ElemType A[10] = {3, 87, 2, 93, 78, 56, 61, 38, 12, 40};
//    memcpy(ST.elem, A, sizeof(A));
    ST_print(ST);
    HeapSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
