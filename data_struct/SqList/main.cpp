#include <stdio.h>

#define MaxSize 50
typedef int ElemType;
//静态分配
typedef struct {
    ElemType data[MaxSize];
    int length;//顺序表当前长度，也就是顺序表当前有多少个元素
} SqList;

//顺序表的插入，L会改变，因此要用引用，i表示插入的位置
bool ListInsert(SqList &L, int i, ElemType element) {
    //判断i是否合法
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    //如果存储空间满了就不能插入
    if (L.length == MaxSize) {
        return false;
    }
    //把后面的元素依次向后移动，空出位置，插入新元素
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = element;
    L.length++;
    return true;
}

//顺序表的删除，i表示删除的元素的位置，del获取被删除的元素的值
bool ListDelete(SqList &L, int i, ElemType &e) {
    //判断删除位置是否合法
    if (i < 1 || i > L.length) {
        return false;
    }
    e = L.data[i - 1];//首先要保存删除的值
    for (int j = i; j < L.length; j++) { //往前移动元素
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

//查找某个元素的位置，找到返回该元素的位置，没找到返回0
int LocateElem(SqList L, ElemType e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e)
            return i + 1; //因为i是数组的下标，i+1才是顺序表的下标
    }
    return 0;//循环结束没找到，返回0
}

//打印顺序表
void PrintList(SqList L) {
    for (int i = 0; i < L.length; ++i) {
        printf("%3d", L.data[i]);
    }
    printf("\n");
}

//顺序表的初始化及插入实战
int main() {
    SqList L;//定义一个顺序表
    bool ret;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;//设置长度
    ret = ListInsert(L, 2, 60);
    if (ret) {
        printf("insert successfully\n");
        PrintList(L);
    } else {
        printf("fail to insert");
    }
    ElemType del; //删除的元素存在del中
    ret = ListDelete(L, 2, del);
    if (ret) {
        printf("delete successfully\n");
        PrintList(L);
    } else {
        printf("fail to delete");
    }
    int pos;//存储元素位置
    pos = LocateElem(L, 3);
    if (pos) {
        printf("find this element");
    } else {
        printf("do not find this element");
    }
    return 0;
}
