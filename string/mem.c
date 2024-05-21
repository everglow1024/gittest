# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// 内存操作；
// memcpy memmove memset memcmp;

void test1()
{
    char arr[10] = "afsdf";
    char arr2[10] = {0};
    char arr3[10] = "afsddfdfd";

    memcpy(arr2, arr, 5);
    printf("%s\n", arr2);

    memmove(arr3, arr, 5);
    printf("%s\n", arr3);

    memset(arr3, 0, 5);  //字节操作
    printf("%s\n", arr3);

    memcmp(arr, arr3, 5);
    printf("%d\n", memcmp(arr, arr3, 5));
}

void my_memcpy(char *dest, char *src, int n)
{
    char *p = dest;
    char *q = src;
    while (n--)
    {
        *p++ = *q++;
    }
}
void my_memmove(char *dest, char *src, int n)
{
    char *p = dest;
    char *q = src;
    char *end = src + n;
    while (q < end)
    {
        *p++ = *q++;
    }
}

void my_memset(char *dest, char c, int n)
{
    char *p = dest;
    while (n--)
    {
        *p++ = c;
    }
}

int my_memcmp(char *dest, char *src, int n)
{
    char *p = dest;
    char *q = src;
    while (n--)
    {
        if (*p++ != *q++)
        {
            return 1;
        }
    }
    return 0;
}

void test2 ()
{
    char arr[10] = "afsdf";
    char arr2[10] = {0};
    char arr3[10] = "afsddfdfd";

    my_memcpy(arr2, arr, 5);
    printf("%s\n", arr2);

    my_memmove(arr3, arr, 5);
    printf("%s\n", arr3);

    my_memset(arr3, 0, 5);  //字节操作
}
int main()
{
    test2();  //原函数；
    return 0;
}