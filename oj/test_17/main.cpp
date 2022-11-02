#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode,*LinkList;

LinkList list_head_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof (LNode));
    L->next = NULL;
    LNode *s;
    ElemType x;
    scanf("%d",&x);
    while (x!=9999)
    {
        s = (LinkList)malloc(sizeof (LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}

LinkList list_tail_insert(LinkList &L)
{
    L= (LinkList)malloc(sizeof (LNode));
    LNode *s,*r=L;
    ElemType x;
    scanf("%d",&x);
    while(x!=9999)
    {
        s = (LinkList) malloc(sizeof (LNode));
        s->data=x;
        r->next=s;
        r = s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

void PrintList(LinkList L)

{
    L=L->next;
    while(L!=NULL)
    {
        printf("%d",L->data);//打印当前结点数据
        L=L->next;//指向下一个结点
        if(L!=NULL)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    LinkList L;
    list_head_insert(L);
    PrintList(L);
    list_tail_insert(L);
    PrintList(L);
    return 0;
}
