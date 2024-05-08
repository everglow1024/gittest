//  1、计算n的阶乘
# include <stdio.h>
# include <math.h>

int main()
{
    int a = 0, b = 0;

    printf("Please input your num");
    scanf("%d", &a);
    
    for(int i=1; i<=a;i++)
    {
        b = i * i; 
        printf("result is %d", b);
    }
    
    return 0;
}