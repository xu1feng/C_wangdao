#include<stdio.h>
#include<stdlib.h>

void malloc_func(char * &p)
{
    p = (char *)malloc(100);
    fgets(p,100,stdin);
}

int main() {
    char *p;
    malloc_func(p);
    puts(p);
    return 0;
}
