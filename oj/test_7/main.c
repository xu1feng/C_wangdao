#include <stdio.h>

int main() {
    int n;
    int s = 1 ;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}
