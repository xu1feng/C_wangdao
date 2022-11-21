#include <stdio.h>

int main() {
    int i;
    int arr[5];
    int result = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        result ^= arr[i];
    }
    printf("%d", result);
    return 0;
}
