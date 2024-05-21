#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    //开辟内存空间;
    int* p = (int*)malloc(40); 
    // 报错处理；
    if(p == NULL)
    {
        printf("malloc error:%s\n",strerror(errno));
        return -1;
    }
    // 使用
    for(int i = 0; i < 10; i++)
    {
        p[i] = i;
        printf("%d ",p[i]);
    }
    return 0;
}