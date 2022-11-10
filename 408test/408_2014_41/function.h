//
// Created by 24655 on 2022/11/9.
//

#ifndef BITREE_PRE_IN_POST_ORDER_FUNCTION_H
#define BITREE_PRE_IN_POST_ORDER_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
typedef char BiElemType;
typedef struct BiTNode{
    BiElemType weight;//c就是书籍上的data
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

//tag结构体是辅助队列的使用
typedef struct tag{
    BiTree p;//树的某一个结点的地址值
    struct tag *pnext;
}tag_t,*ptag_t;
#endif //BITREE_PRE_IN_POST_ORDER_FUNCTION_H
