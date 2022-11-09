//
// Created by 24655 on 2022/11/9.
//

#ifndef BITREE_LEVELORDER_FUNCTION_H
#define BITREE_LEVELORDER_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
//树的相关数据结构
typedef char BiElemType;
typedef struct BiTNode{
    BiElemType c;//c就是书籍上的data
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

//tag结构体是辅助队列的使用
typedef struct tag{
    BiTree p;//树的某一个结点的地址值
    struct tag *pnext;
}tag_t,*ptag_t;

//队列的相关数据结构
typedef BiTree ElemType;
typedef struct LinkNode {
    ElemType data;
    struct LinkNode *next;
} LinkNode;
typedef struct {
    LinkNode *front, *rear;//链表头，链表尾，也可以称作队头、队尾
} LinkQueue;
void InitQueue(LinkQueue &Q);
bool IsEmpty(LinkQueue Q);
void EnQueue(LinkQueue &Q,ElemType x);
bool DeQueue(LinkQueue &Q,ElemType &x);
#endif //BITREE_LEVELORDER_FUNCTION_H
