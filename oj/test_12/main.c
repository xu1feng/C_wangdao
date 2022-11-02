#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    char *p;
    p = (char *)malloc(n);
    char c;
    scanf("%c", &c);//去除换行\n
    gets(p);
    puts(p);
    free(p);
    return 0;
}
