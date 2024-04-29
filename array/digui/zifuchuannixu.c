# include <stdio.h>
# include <string.h>


void reverse_string(char *string) 
{
    int sz = strlen(string);

    char tmp = *string;

    *string = *(string+sz-1);

    *(string+sz-1) = '\0'; 

    if(strlen(string+1)>=2)
        reverse_string(string+1);

    *(string+sz-1) = tmp; 

    printf("%s\n", string);
}


int main()
{
    char string[] = "abcdef";  // char arr[] = "abcde"; //使用 char *str = "abcdef" 定义的数组，无法被修改；
    int sz = strlen(string);

    printf("%d\n", sz);
    printf("input: %s\n", string);

    reverse_string(string); // 字符串可以理解为一个字符数组，那么和数组相同的是，数组的首地址也就是数组名；也就是字符串的名称；

    return 0;
}