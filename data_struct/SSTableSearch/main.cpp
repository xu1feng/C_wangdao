#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//整型指针，申请的堆空间的起始地址放入elem
    int TableLen;//存储动态数组里边元素的个数
} SSTable;

void ST_Init(SSTable &ST, int len) {
    //多申请了一个位置，为了存放哨兵，不使用哨兵也可以，为了和王道书上保持一致
    ST.TableLen = len + 1;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);
    int i;
    srand(time(NULL));//随机数生成
    for (i = 1; i < ST.TableLen; i++)//因为第0个是哨兵，所以从1开始随机
    {
        ST.elem[i] = rand() % 100;//为了随机生成的数都在0-99之间
    }
}

void ST_print(SSTable ST) {
    for (int i = 1; i < ST.TableLen; ++i) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

int Search_Seq(SSTable ST, ElemType key) {
    ST.elem[0] = key;//让零号元素作为哨兵
    int i;
    for (i = ST.TableLen - 1; ST.elem[i] != key; --i);//从后往前找，找到了，i刚好是对应的位置
    return i;
}

//顺序查找
int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
    ElemType key;
    printf("please input search value:\n");
    scanf("%d", &key);
    int pos;
    pos = Search_Seq(ST, key);
    if (pos) {
        printf("success, position:%d", pos);
    } else {
        printf("not find");
    }
    return 0;
}
