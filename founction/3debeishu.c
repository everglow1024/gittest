# include <stdio.h>
// 函数章节的作业，打印1-100中三的倍数；

void print(void)
{
    for (int i=1;i<=100;i++)
    {
        if ((i%3)==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main ()
{
    printf("\n");
    print();
    return 0;
}