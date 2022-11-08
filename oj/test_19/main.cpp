#include<stdio.h>

#define MaxSize 5
typedef int Elemtype;
/*新建一个栈，读取标准输入3个整数3 4 5，
入栈3 4 5，依次出栈，打印 5 4 3，*/
typedef struct SqStack {
    Elemtype data[MaxSize];
    int top;
}SqStack;//stack
void IniteStack(SqStack &S) {
    S.top = -1;
}
bool StackEmpty(SqStack& S) {
    if (S.top == -1) {
        return true;
    }
    return false;
}// stack is empty
bool Push(SqStack &S, Elemtype x) {
    if (S.top == MaxSize-1){

        return false;
    }
    S.top++;
    S.data[S.top] = x;
    return true;
}
bool Pop(SqStack &S) {
    if (StackEmpty(S)) {
        return false;
    }
    while (S.top != -1) {
        printf("%2d", S.data[S.top]);
        S.top--;
    }
    return true;
}
/*新建循环队列（Maxsize为5），
读取标准输入3 4 5 6 7，
入队7时，队满，打印false，
然后依次出队，输出 3 4 5 6*/
typedef struct SqQueue {
    Elemtype data[MaxSize];
    int front, rear;
}SqQueue;//queue
void Initequeue(SqQueue& Q) {
    Q.front = Q.rear = 0;
}
bool isempty(SqQueue Q) {
    if (Q.rear == Q.front) {
        return true;
    }
    return false;
}
bool EnQueue(SqQueue& Q, Elemtype x) {
    if ((Q.rear+1)%MaxSize==Q.front) {
        printf("false\n");
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;

}
bool OutQueue(SqQueue& Q) {
    if (isempty(Q)) {
        return false;
    }
    while (!isempty(Q)) {
        printf("%2d", Q.data[Q.front]);
        Q.front = (Q.front + 1) % MaxSize;
    }
    return true;
}
int main() {
    SqStack S;
    IniteStack(S);
    Elemtype a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    Elemtype d, e, f, g, h;
    scanf("%d %d %d %d", &d, &e, &f, &g, &h);
    Push(S, a);
    Push(S, b);
    Push(S, c);
    Pop(S);
    printf("\n");
    SqQueue Q;
    Initequeue(Q);
    EnQueue(Q, d);
    EnQueue(Q, e);
    EnQueue(Q, f);
    EnQueue(Q, g);
    EnQueue(Q, h);
    OutQueue(Q);
    return 0;

}

