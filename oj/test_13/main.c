#include <stdio.h>

int step(int n)
{
    if(1 == n || 2 == n)
        return n;
    return step(n - 1) + step(n - 2);
}
int main() {
    int n;
    scanf("%d",&n);
    int ans = step(n);
    printf("%d",ans);
    return 0;
}
