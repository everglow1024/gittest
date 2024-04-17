// 该文件实现的是求解最大公约数的程序
# include <stdio.h>

int zdgys(int x, int y);

int zzxc(int x, int y);

int main()
{
    int a = 0;
    int b = 0;
    printf("Please input your nums: \n");
    scanf("%d %d", &a, &b);

    printf("%d\n", zdgys(a, b));

    printf("%d\n", zzxc(a, b));

    return 0;
}

int zdgys(int x, int y)
{
    int max = 0;
    int res = 0;
    int min = (x >= y) ? y : x; // 使用三元运算符代替 min_num 函数

    for (int i= 1; i<= min ; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            max = i;
        }
    }
    return max;
}

int zzxc(int x, int y)
{
    int gcd = 0;
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
        gcd = x; 
    }
    return gcd;
}

// 以下是GPT给出的优化版本；
// #include <stdio.h>
// #include <math.h> // 导入 math.h 库以使用 sqrt 函数

// // 计算两个整数的最大公约数
// int gcd(int x, int y) {
//     int max = 0;
//     int min = (x >= y) ? y : x; // 使用三元运算符代替 min_num 函数
//     for (int i = 1; i <= sqrt(min); i++) { // 循环范围缩小到较小数的平方根
//         if (x % i == 0 && y % i == 0) { // 删除不必要的条件判断
//             max = i;
//         }
//     }
//     return max;
// }

// int main() {
//     int a = 0;
//     int b = 0;
//     printf("Please input your nums: \n");
//     scanf("%d %d", &a, &b);

//     printf("%d\n", gcd(a, b)); // 修改输出格式

//     return 0;
// }