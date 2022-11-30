#include <stdio.h>
#include <string.h>

int main() {
    int i = 123456;
    FILE *fp;
    int ret;//存储函数的返回值
    fp = fopen("file.txt", "rb+");//“r+”以文本方式打开文件
    if (NULL == fp) {
        perror("fopen");
        return -1;
    }
//    ret = fwrite(&i, sizeof(int), 1, fp);
    i = 0;
    ret = fread(&i, sizeof(int), 1, fp);
    printf("i=%d", i);
    fclose(fp);
    return 0;
}
