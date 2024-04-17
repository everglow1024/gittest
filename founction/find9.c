//编写程序数一下1到100的所有整数中出现多少个数字9
# include <stdio.h>

void print(void);

int main()
{
    print();
    return 0;
}

void print(void)
{
    int num = 0;
    for (int i=1; i<=100; i++)
    {
        if (i / 10 == 9 || i % 10 == 9)
        {
            num++;
            printf("%d ", i);
        } 
    }
    printf("\n%d\n", num);
}