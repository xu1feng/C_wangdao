//
// Created by 24655 on 2022/11/9.
//
#include "function.h"
//队列的初始化，使用的是带头节点的链表来实现的
void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool IsEmpty(LinkQueue Q)
{
    if(Q.front == Q.rear)
        return true;
    else
        return false;
}

//入队
void EnQueue(LinkQueue &Q, ElemType x) {
    LinkNode *pnew = (LinkNode *) malloc(sizeof(LinkNode));
    pnew->data = x;
    pnew->next = NULL;//要让next为NULL
    Q.rear->next = pnew;//尾指针的next指向pnew，因为从尾部入队
    Q.rear = pnew;//rear要指向新的尾部
}

//出队
bool DeQueue(LinkQueue &Q, ElemType &x) {
    if (Q.rear == Q.front)//队列为空
        return false;
    LinkNode *q = Q.front->next;//拿到第一个结点，存到q
    x = q->data;//获取要出队的元素的值
    Q.front->next = q->next;//让一个结点断链
    if (Q.rear == q)//链表只剩余一个结点时，被删除时要改变rear
        Q.rear = Q.front;
    free(q);
    return true;
}
