//计算1/1-1/2+1/3-1/4+1/5..+1/99-1/100的值，打印出结果 
# include <stdio.h>

void print(void);

int main()
{
    print();
    return 0;
}

// void print(void)
// {
//     double sum = 0;  
//     for(int i=1; i<=100; i++)
//     {
//         if (i%2==0)
//             sum = sum - (1.0 / i);  // 使用除法时，需要考虑整型对除法的影响；
//         else 
//             sum = sum + (1.0 / i);
//     }
//     printf("%lf", sum);
// }

// 更加简单的写法

void print(void)
{
    double sum = 0;  
    int flag = 1 ; 
    for(int i=1; i<=100; i++)
    {
        sum = sum + flag * (1.0 / i);  // 使用除法时，需要考虑整型对除法的影响；
        flag = -flag;
    }
    printf("%lf", sum);
}