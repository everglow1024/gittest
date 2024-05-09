# include <stdio.h>

// 函数指针；
// 函数指针的定义：int（*p）(int int) = function;
// 使用函数指针实现函数回调；
// *************************************************
// 函数指针数组，首先是一个数组，其中每个元素的内容是指针,每个指针指向的是函数;

void  print(void)
{
    printf("**********************\n");
    printf("**1、add   2、sub*****\n");
    printf("**3、mul   4、div*****\n");
    printf("**5、out         *****\n");
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

void calu(int (*p)())
{
    int a=0, b=0;
    printf("Please input your numbs\n");
    scanf("%d %d", &a, &b);
    printf("%d\n", (*p)(a,b));
}

int main()
{
    int input = 1;
    int a=0, b=0;

    int (*pf[4])(int, int) = {&add, &sub, &mul, &div}; // 函数指针的数组

    while(input!=5)
    {
        print();
        scanf("%d", &input);
        if(input<5)
        {
            scanf("%d %d", &a, &b);
            printf("%d\n", (*pf[input-1])(a, b));
        }
        else if(input==5)
        {
            printf("End!\n");
            break;
        }

    }

    // while(input!=5)
    // {
    //     print();
    //     scanf("%d", &input);
    //     switch(input)
    //     {
    //         case 1:
    //             calu(add);
    //             (*pf[input])(a b)
    //             break;

    //         case 2:
    //             calu(sub);
    //             break;

    //         case 3:
    //             calu(mul);
    //             break;

    //         case 4:
    //             calu(div);
    //             break;

    //         case 5:
    //             printf("end!\n");
    //             break;
    //     }
        
    // }
}