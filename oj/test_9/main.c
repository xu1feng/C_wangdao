#include <stdio.h>

int main() {
    int a[100];
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 2)
            count++;
    }
    printf("%d", count);
    return 0;
}
