# include <stdio.h>

//数组指针；

int main()
{
    int arr[10] = {0};
    int (*p)[10] = &arr;

    printf("%p\n", arr);
    printf("%p\n", p);
    printf("%p\n", p+1);        //地址变化了40（4*10;

    return 0;
}