#include <stdio.h>

int main()
{
    int a = 0;  //0x00 00 00 01 
    int *p = &a;

    if(*(char*)p==1) //整型原本有四个字节，强制转化为char*,仅读取第一个字节的内容；
        printf("xiaoduan\n"); // 小端，倒序，01 00 00 00；
    else 
        printf("xiaoduan\n"); // 大端，倒序，00 00 00 01；
    return 0;
}