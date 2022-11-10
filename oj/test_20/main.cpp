#include <stdio.h>
#include <stdlib.h>

typedef char BiElemType;
typedef struct BiTNode
{
    BiElemType c;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
typedef struct tag
{
    BiTree p;
    struct tag *next;
}tag_t,*ptag_t;

void PreOrder(BiTree T)
{
    if(T!=NULL)
    {
        putchar(T->c);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}
int main() {
    BiTree pnew;
    char c;
    BiTree tree = NULL;
    ptag_t phead = NULL,ptail=NULL,listpnew=NULL,pcur=NULL;
    while(scanf("%c",&c))
    {
        if(c == '\n')
            break;
        pnew = (BiTree)calloc(1,sizeof (BiTNode));
        pnew->c = c;
        listpnew = (ptag_t)calloc(1,sizeof (tag_t));
        listpnew->p = pnew;
        if(NULL == tree)
        {
            tree = pnew;
            phead = listpnew;
            ptail = listpnew;
            pcur = listpnew;
        }else{
            ptail->next = listpnew;
            ptail = listpnew;
            if(NULL == pcur->p->lchild)
            {
                pcur->p->lchild = pnew;
            }else if(NULL == pcur->p->rchild)
            {
                pcur->p->rchild = pnew;
                pcur = pcur->next;
            }
        }
    }
    PreOrder(tree);
    return 0;
}
