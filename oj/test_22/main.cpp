#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct BSTNode {
    KeyType key;
    struct BSTNode *lchild, *rchild;
} BSTNode, *BiTree;

// 王道书上的递归写法，代码简单，但是理解有难度
int BST_Insert1(BiTree &T, KeyType k) {
    if (NULL == T) {    //为新节点申请空间，第一个结点作为树根，后面递归再进入的不是树根，是为叶子结点
        T = (BiTree) malloc(sizeof(BSTNode));
        T->key = k;
        T->lchild = T->rchild = NULL;
        return 1;//代表插入成功
    } else if (k == T->key)
        return 0;//发现相同元素，就不插入
    else if (k < T->key)//如果要插入的结点，小于当前结点
        //函数调用结束后，左孩子和原来的父亲会关联起来，巧妙利用了引用机制
        return BST_Insert1(T->lchild, k);
    else
        return BST_Insert1(T->rchild, k);
}

void Creat_BST(BiTree &T, KeyType *str, int len) {
    T = NULL;//T是树根
    int i;
    for (i = 0; i < len; i++) {
        BST_Insert1(T, str[i]);//把某一个结点放入二叉排序树
    }
}

//往数组中存一个元素，下标就需要往后移动一次
//int element_pos = 0;

void InOrder(BiTree T, int *arr) {
    static int element_pos = 0;//静态局部变量只会初始化一次，只是在函数内有效
    if (T != NULL) {
        InOrder(T->lchild, arr);
        printf("%3d", T->key);
        //打印的同时，把数据存储到数组中
        arr[element_pos++] = T->key;
        InOrder(T->rchild, arr);
    }
}

//实现二分查找
int BinarySearch(int *arr,KeyType key,int len) {
    int low = 0;
    int high = len - 1;
    int mid;
    while (low <= high)//low<=high，可以让mid既能取到low，也能取到high
    {
        mid = (low + high) / 2;
        if (key > arr[mid])//如果目标值大于中位数
        {
            low = mid + 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}


int main() {
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    BiTree T = NULL;//树根
    Creat_BST(T, arr, 10);
    InOrder(T, arr);
    printf("\n");
    int key_pos;
    key_pos = BinarySearch(arr,21,10);
    printf("%d",key_pos);
    return 0;
}