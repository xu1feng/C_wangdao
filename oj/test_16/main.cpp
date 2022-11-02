#include <stdio.h>

#define MaxSize 50
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int length;
}SqList;

bool ListInsert(SqList &L,int pos, ElemType e)
{
    if(pos < 1 || pos > L.length + 1)
        return false;
    if(L.length == MaxSize)
        return false;
    for(int j=L.length;j>=pos;j--)
    {
        L.data[j] = L.data[j-1];
    }
    L.data[pos-1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L,int pos,ElemType &e)
{
    if(pos < 1 || pos > L.length)
        return false;
    e=L.data[pos-1];
    for(int j = pos;j<L.length;j++)
    {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

void PrintList(SqList L)
{
    for (int i = 0; i < L.length; ++i) {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}

int main() {
    SqList L;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;
    bool ret;
    ElemType a;
    int pos;
    scanf("%d",&a);
    scanf("%d",&pos);
    ret = ListInsert(L,2,a);
    if(ret)
    {
        PrintList(L);
    }else {
        printf("false");
    }
    ElemType del;
    ret = ListDelete(L,pos,del);
    if(ret)
    {
        PrintList(L);
    }else{
        printf("false");
    }
    return 0;
}
