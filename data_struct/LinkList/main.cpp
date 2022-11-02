#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

//头插法新建链表
LinkList list_head_insert(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode)); //申请头结点空间，头指针指向头结点
    L->next = NULL;
    LNode *s;
    ElemType x;
    scanf("%d", &x);//从标准输入读取数据
    while (x != 9999) {
        s = (LNode *) malloc(sizeof(LNode));//申请一个新空间给s，强制类型转换
        s->data = x;//把读取到的值，给新空间中的data
        s->next = L->next;//让新结点的next指针指向链表的第一个元素（第一个放我们数据的元素）
        L->next = s;//让s作为第一个元素
        scanf("%d", &x);
    }
    return L;
}

//尾插法新建链表
LinkList list_tail_insert(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));
    LNode *s, *r = L;//s指向新结点，r代表链表表尾结点，指向链表尾部
    int x;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LinkList) malloc(sizeof(LNode));//为新结点申请空间
        s->data = x;
        r->next = s;//让尾部结点指向新结点
        r = s;//r指向新的表尾结点
        scanf("%d", &x);
    }
    r->next = NULL;//尾结点的next指针赋为NULL
    return L;
}

//按位置查找，L是第0个结点
LinkList GetElem(LinkList L, int pos) {
    int i = 0;
    if (pos < 0) {
        return NULL;
    }
    while (L && i < pos) {
        L = L->next;
        i++;
    }
    return L;
}

//按值查找
LinkList LocateElem(LinkList L, ElemType value) {
    while (L) {
        if (L->data == value)//如果找到对应的值，返回那个结点的地址
            return L;
        L = L->next;
    }
    return NULL;
}

//在第pos个位置插入指定元素，pos代表插入到第几个位置
bool ListFrontInsert(LinkList L, int pos, ElemType value) {
    LinkList p;
    p = GetElem(L, pos - 1);
    if (p == NULL)
        return false;
    LinkList q = (LinkList) malloc(sizeof(LNode));//为新结点申请空间
    q->data = value;
    q->next = p->next;
    p->next = q;
    return true;
}

void print_list(LinkList L) {
    L = L->next;
    while (L != NULL) {
        printf("%3d", L->data);
        L = L->next;
    }
    printf("\n");
}

int main() {
    LinkList L;//L是链表头指针
    LinkList search;
    bool ret;
//    list_head_insert(L);//头插法新建链表
//    print_list(L);
    list_tail_insert(L);
    print_list(L);
    search = GetElem(L, 2);
    if (search != NULL) {
        printf("search by position successfully\n");
        printf("%d\n", search->data);
    } else {
        printf("search by position false");
    }
    search = LocateElem(L, 3);
    if (search != NULL) {
        printf("search by value successfully\n");
        printf("%d\n", search->data);
    } else {
        printf("search by value false");
    }
    ret = ListFrontInsert(L, 2, 99);
    if (ret) {
        print_list(L);
    } else {
        printf("insert false");
    }
    return 0;
}
