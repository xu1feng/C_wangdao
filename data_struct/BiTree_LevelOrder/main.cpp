#include "function.h"

//前序遍历 也叫先序遍历 也叫深度优先遍历
// abdhiejcfg
void PreOrder(BiTree p) {
    if (p != NULL) {
        putchar(p->c);//等价于visit函数
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

//中序遍历 hdibjeadfcg
void InOrder(BiTree p) {
    if (p != NULL) {
        InOrder(p->lchild);
        putchar(p->c);//等价于visit函数
        InOrder(p->rchild);
    }
}

//后序遍历 hidjebfgca
void PostOrder(BiTree p) {
    if (p != NULL) {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        putchar(p->c);//等价于visit函数
    }
}

//层序遍历 也是广度优先遍历
void LevelOrder(BiTree T) {
    LinkQueue Q;//定义一个辅助队列
    InitQueue(Q);//初始化队列
    BiTree p;//存储出队的结点
    EnQueue(Q, T);//树根入队
    while (!IsEmpty(Q)) {
        DeQueue(Q, p);//出队当前结点并打印
        putchar(p->c);//等价于printf("%c",c);
        if (p->lchild != NULL)//入队左孩子
            EnQueue(Q, p->lchild);
        if (p->rchild != NULL)//入队右孩子
            EnQueue(Q, p->rchild);
    }
}

int main() {
    BiTree pnew;//用来指向新申请的树结点
    char c;
    BiTree tree = NULL;//指向树根，代表树
    //phead就是队列头，ptail就是队列尾
    ptag_t phead = NULL, ptail = NULL, list_pnew = NULL, pcur = NULL;
    //输入内容为abcdefghij
    while (scanf("%c", &c)) {
        if (c == '\n')
            break;//读到换行就结束
        //calloc申请空间大小为第一个参数与第二个参数相乘的结果，并对申请的空间进行初始化，赋值为0
        pnew = (BiTree) calloc(1, sizeof(BiTNode));
        pnew->c = c;//把读到的值存进来
        list_pnew = (ptag_t) calloc(1, sizeof(tag_t));//给队列结点申请空间
        list_pnew->p = pnew;
        //如果是树的第一个结点
        if (NULL == tree) {
            tree = pnew;//树根指向树的根结点（第一个结点）
            phead = list_pnew;//第一个结点既是队列头也是队列尾
            ptail = list_pnew;
            pcur = list_pnew;//pcur要指向要进入树的父亲元素
        } else {
            //让元素先入队列
            ptail->pnext = list_pnew;
            ptail = list_pnew;
            //接下来把pnew结点放入树中
            if (NULL == pcur->p->lchild) {
                pcur->p->lchild = pnew;//pcur->p的左孩子为空就放入左孩子
            } else if (NULL == pcur->p->rchild) {
                pcur->p->rchild = pnew;//pcur->p的右孩子为空就放入右孩子
                pcur = pcur->pnext;//当前结点的左右孩子都有了，pcur指向下一个
            }
        }
    }
    printf("--------------PreOrder------------\n");
    PreOrder(tree);
    printf("\n--------------InOrder------------\n");
    InOrder(tree);
    printf("\n--------------PostOrder------------\n");
    PostOrder(tree);
    printf("\n--------------LevelOrder------------\n");
    LevelOrder(tree);
    return 0;
}
