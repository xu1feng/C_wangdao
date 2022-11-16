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

int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
    SelectSort(ST.elem, 10);
    ST_print(ST);
    return 0;
}
