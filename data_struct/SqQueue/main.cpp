#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];//数组，存储MaxSize-1个，牺牲一个存储单元来判断队满
    int front, rear;
} SqQueue;

//初始化循环队列
void InitQueue(SqQueue &Q) {
    Q.front = Q.rear = 0;
}

//判断循环队列是否为空
bool IsEmpty(SqQueue Q) {
    if (Q.front == Q.rear)
        return true;
    return false;
}

//入队
bool EnQueue(SqQueue &Q, ElemType x) {
    if ((Q.rear + 1) % MaxSize == Q.front)//队满
        return false;
    Q.data[Q.rear] = x;//放入元素
    Q.rear = (Q.rear + 1) % MaxSize; //rear+1，如果大于数组最大下标，则回到开头
    return true;
}

//出队
bool DeQueue(SqQueue &Q, ElemType &x) {
    if (IsEmpty(Q))//队列为空
        return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) & MaxSize;
    return true;
}

int main() {
    SqQueue Q;
    InitQueue(Q);
    bool ret;
    ret = IsEmpty(Q);
    if (ret) {
        printf("SqQueue is empty\n");
    } else {
        printf("SqQueue is not empty\n");
    }
    EnQueue(Q, 3);
    EnQueue(Q, 4);
    EnQueue(Q, 5);
    ret = EnQueue(Q, 6);
    if (ret) {
        printf("EnQueue success\n");
    } else {
        printf("EnQueue failed\n");
    }
    ElemType element;//存储出队元素
    ret = DeQueue(Q, element);
    if (ret) {
        printf("DeQueue element %d\n", element);
        printf("DeQueue success\n");
    } else {
        printf("DeQueue failed\n");
    }
    return 0;
}
