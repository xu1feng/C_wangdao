#include <stdio.h>


int main() {
    char buf[20] = {0};
    FILE *fp;
    int ret;//存储函数的返回值
    fp = fopen("file.txt", "r+");//“r+”以文本方式打开文件
    if (NULL == fp) {
        perror("fopen");
        return -1;
    }
    //一次读一行，读空文件
    while (fgets(buf, sizeof(buf), fp) != NULL)//fgets读到文件结束时返回NULL
        printf("%s", buf);
    fclose(fp);
    return 0;
}
