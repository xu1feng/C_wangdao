#include <stdio.h>

void change(int *j)
{
    *j/=2;
}

int main() {
    int n;
    scanf("%d",&n);
    change(&n);
    printf("%d",n);
    return 0;
}
