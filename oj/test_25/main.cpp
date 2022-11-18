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

void SelectSort(ElemType *A, int n) {
    int i, j, min;//min记录最小值的下标
    for (i = 0; i < n - 1; i++) {
        min = i;//认为0号元素最小
        for (j = i + 1; j < n; j++)//找到从i开始到最后序列的最小值的下标
        {
            if (A[j] < A[min])//当某个元素A[j]小于最小元素
            {
                min = j;//将下标j赋值给min，min就记录下来最小值下标
            }
        }
        if (min != i) {
            //遍历完毕找到最小值的位置后，与A[i]交换，这样最小值就被放到了前面
            swap(A[i], A[min]);
        }

    }
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
    ElemType A[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    memcpy(ST.elem, A, sizeof(A));
    SelectSort(ST.elem, 10);
    ST_print(ST);
    memcpy(ST.elem, A, sizeof(A));
    HeapSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
