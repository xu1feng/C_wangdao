#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

LinkList CreateList(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));
    LNode *s, *r = L;
    ElemType x;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LinkList) malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

LinkList GetElem(LinkList L, int pos) {
    if (pos < 0)
        return NULL;
    int i = 0;
    while (L && i < pos) {
        L = L->next;
        i++;
    }
    return L;
}

bool ListFrontInsert(LinkList L, int pos, ElemType value) {
    LinkList p;
    p = GetElem(L, pos - 1);
    if (p == NULL)
        return false;
    LinkList q = (LinkList) malloc(sizeof(LNode));
    q->data = value;
    q->next = p->next;
    p->next = q;
    return true;
}

bool ListDelete(LinkList L, int pos) {
    if (pos < 1)
        return false;
    LinkList p = GetElem(L, pos - 1);
    if (p == NULL)
        return false;
    LinkList q = p->next;
    p->next = q->next;
    free(q);
    return true;
}

void PrintList(LinkList L) {
    L = L->next;
    while (L != NULL) {
        printf("%3d", L->data);
        L = L->next;
    }
    printf("\n");
}

int main() {
    LinkList L;
    CreateList(L);
    LinkList search;
    bool ret;
    search = GetElem(L, 2);
    printf("%d\n", search->data);
    ret = ListFrontInsert(L, 2, 99);
    if (ret) {
        PrintList(L);
    }
    ret = ListDelete(L, 4);
    if (ret) {
        PrintList(L);
    }
    return 0;
}
