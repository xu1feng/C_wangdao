#include <stdio.h>
#include <stdlib.h>
#define N 7
typedef int ElemType;

void Print(int *a)
{
    for(int i = 0;i<N;i++)
    {
        printf("%3d",a[i]);
    }
}

//实现合并两个有序数组
void Merge(ElemType *A,int low,int mid,int high)
{
    static ElemType B[N];//加static的目的是无论递归调用多少次，都只有一个B[N]
    int i,j,k;
    for(i=low;i<=high;i++)//把A里的元素都给B
    {
        B[i] = A[i];
    }
    k = low;
    for(i = low,j = mid+1;i<=mid&&j<=high;k++)//合并两个有序数组
    {
        if(B[i] < B[j])
        {
            A[k] = B[i++];
        } else{
            A[k] = B[j++];
        }
    }
    //把某一个有序数组中剩余的元素放进来
    while(i<=mid)
    {
        A[k++] = B[i++];
    }
    while(j<=high)
    {
        A[k++] = B[j++];
    }
}

void MergeSort(ElemType *A,int low,int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}

int main() {
    ElemType A[7] = {49,38,65,97,76,13,27};
    MergeSort(A,0,6);
    Print(A);
    return 0;
}
