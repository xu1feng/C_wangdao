#include <stdio.h>

int main() {
    int a;
    int b = 0;
    scanf("%d", &a);
    int backup_a = a;
    while (a) {
        b = b * 10 + a % 10;
//        printf("%d\n",a%10);
        a = a / 10;
    }
    if (b == backup_a)
        printf("yes");
    else
        printf("no");
    return 0;
}
