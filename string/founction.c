# include <stdio.h>
# include <assert.h>
# include <string.h>

// 字符串函数实现：
// strcpy strcat strcmp;


char* my_strcpy(char target[], char source[])
{
    int i = 0;
    assert(target && source);
    char* res = target; //原函数的返回值是char*; 
    while(source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    return res;
}

char* my_strcpy1(char target[], char source[])
{
    assert(target && source);
    int i = 0;
    char* res = target; //原函数的返回值是char*; 
    while(*target++ = *source++)
    {
        ;
    }
    return res;
}

char* my_strcat(char target[], char source[])
{
    assert(target && source);
    int i = 0;
    char* res = target;         //原函数的返回值是char*; 
    while(*target != '\0')
    {
        target++;                // 找到\0的位数；
    }
    while(*target++ = *source++)
    {
        ;
    }
    return res;
}

int my_strcmp(const char *des, const char *sro)
{
    assert(des && sro);
    while(*des == *sro)
    {
        if(*des == '\0')
            return 0;
        des++;
        sro++;
    }
    return (*des - *sro);
}

int main()
{
    char arr1[] = "abc";  //自带"\0"
    char arr3[] = "abc";
    char arr2[20] = {0};

    my_strcpy1(arr2, arr1);  //字符串复制；
    printf("my_strcpy1: %s\n", arr2);

    my_strcat(arr1, arr3);   //字符串追加；
    printf("my_strcat: %s\n", arr1);

    // printf("%d\n", my_strcmp(arr1, arr3));

    return 0;
}
