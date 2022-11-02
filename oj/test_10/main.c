#include <stdio.h>
#include <string.h>

int main() {
    char c[20];
    char d[20];
    gets(c);
    strcpy(d, c);
//    puts(d);
//    printf("%s",d);
    for (int i = 0, j = strlen(c) - 1; i < strlen(c); i++) {
        d[j] = c[i];
        j--;
    }
    int result = strcmp(c, d);
    if (result < 0) {
        printf("%d\n", -1);
    } else if (result > 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
//    printf("%s",d);
    return 0;
}
