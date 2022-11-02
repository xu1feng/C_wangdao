#include <stdio.h>

int main() {
    int a;
    char c;
    float b;
    scanf("%d %c %f",&a,&c,&b);
    printf("%.2f", (float)a + b + (float)c);
    return 0;
}
