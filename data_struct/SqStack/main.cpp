#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];//数组
    int top;//始终指向栈顶的一个变量
} SqStack;

//初始化栈
void InitStack(SqStack &S) {
    S.top = -1;//栈为空
}

bool StackEmpty(SqStack S) {
    if (-1 == S.top)
        return true;
    return false;
}

//入栈
bool Push(SqStack &S, ElemType value) {
    //判断栈是否满了
    if (MaxSize - 1 == S.top)
        return false;
    S.data[++S.top] = value;
    return true;
}

//获取栈顶元素
bool GetTop(SqStack S, ElemType &m) {
    if (StackEmpty(S))
        return false;
    m = S.data[S.top];
    return true;
}

bool Pop(SqStack &S, ElemType &x) {
    if (StackEmpty(S))
        return false;
    x = S.data[S.top--];
    return true;
}

int main() {
    SqStack S;
    InitStack(S);
    bool flag = StackEmpty(S);
    if (flag) {
        printf("Stack is empty\n");
    }
    Push(S, 3);
    Push(S, 4);
    Push(S, 5);
    ElemType x;
    flag = GetTop(S, x);
    if (flag) {
        printf("get top : %d\n", x);
    }
    flag = Pop(S, x);
    if (flag) {
        printf("get Pop : %d\n", x);
    }
    return 0;
}
