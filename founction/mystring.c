# include <stdio.h>
# include <string.h>

// 传递字符数组给函数时，你可以使用数组作为函数参数，但这不会传递整个数组，而是数组的第一个元素的地址。
// int my_strlen(char *x)
// {
//     int count = 0;
//     while (*x != '\0')
//     {
//         count ++;
//         x++;
//     }

//     return count;
// }

int my_strlen(char *x)
{
    if (*x != '\0')
    {
        return 1+my_strlen(x+1);
    }
    else 
    {
        return 0;
    }

}

int main()
{
    
    int a = 0, c = 0;

    char b[] = "123456";  // 字符变量只能存储单个字符, 而不是单个字符。 或者：char *b = "123456";

    a = strlen(b);  
    c = my_strlen(b);

    printf("%ld\n", sizeof(b));  // sizeof(xxx) 用%ld long unsignd int; sizeof(b), b是一个字符串，输出结果为个数+1的原因是，最后有个“\0”；但是strlen不用-1

    printf("%d\n", c);

    printf("%d\n", (a)) ;

    return 0;
}