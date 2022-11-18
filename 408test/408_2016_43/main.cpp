#include <stdio.h>

int setPartition(int a[], int n) {
    int pivotkey, low = 0, low0 = 0, high = n - 1, high0 = n - 1, flag = 1, k = n / 2, i;
    int s1 = 0, s2 = 0;
    while (flag)//当low等于k-1也就是n/2-1时，分割结束
    {
        pivotkey = a[low];
        while (low < high) {
            while (low < high && a[high] >= pivotkey)
                --high;
            if (low != high)
                a[low] = a[high];
            while (low < high && a[low] <= pivotkey)
                ++low;
            if (low != high)
                a[high] = a[low];
        }
        a[low] = pivotkey;//把分割值放到对应的位置
        if(low == k-1)//如果枢纽是第n/2个元素，划分成功
        {
            flag = 0;
        }
        else{
            if(low < k - 1) {
                low0 = ++low;//low0只是做暂存，为下次使用服务，这里我们++low后，low比分割值大1
                high = high0;//把上次暂存的high0拿过来
            }else{
                low = low0;//把上次暂存的low0拿过来
                high0 = --high;//high0只是做暂存，为下次使用做准备
            }
        }
    }
    for(i = 0;i<k;i++)
    {
        s1+=a[i];
    }
    for(i = k;i<n;i++)
    {
        s2+=a[i];
    }
    return s2-s1;
}

int main() {
    int A[10] = {4, 1, 12, 18, 7, 13, 18, 16, 2, 15};
    int difference;
    difference = setPartition(A, 10);
    printf("%d\n", difference);
    return 0;
}
