# include <stdio.h>

// 函数递归；
void print(int x)
{
    
    // 1. 递归结束/运行条件；
    // 2. 结果越来越接近结束条件；
    if (x>9)
    {
        int tmp = x / 10;
        print(tmp);
    }
    printf("%d ", (x%10));

}

int main()
{
    int a = 0;

    scanf("%d", &a);
    print(a);

    return 0;
}